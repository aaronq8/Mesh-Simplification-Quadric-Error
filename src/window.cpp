#include "window.h"

glfw::window::window(int width,int height):
    width_{width},
    height_{height},
    window_{nullptr},
    enable_wf_mode_{0},
    pressed_f_{0}
{}

void glfw::frame_buffer_size_cb(GLFWwindow* window,int width,int height){
    glViewport(0,0,width,height);
}

void glfw::window::process_input(){
    if(glfwGetKey(window_,GLFW_KEY_ESCAPE) == GLFW_PRESS){
        glfwSetWindowShouldClose(window_,true);
    }
    else if(glfwGetKey(window_,GLFW_KEY_F) == GLFW_PRESS){
        pressed_f_=1;
    }
    else if(glfwGetKey(window_,GLFW_KEY_F) == GLFW_RELEASE && pressed_f_){
        std::cout<<"captured F\n";
        enable_wf_mode_^=1;
        glPolygonMode(GL_FRONT_AND_BACK, ((!enable_wf_mode_)?GL_FILL:GL_LINE));
        pressed_f_=0;
    }
}

bool glfw::window::init_glfw(){
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR,3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR,3);    
    glfwWindowHint(GLFW_OPENGL_PROFILE,GLFW_OPENGL_CORE_PROFILE);
    //create window
    window_ = glfwCreateWindow(width_,height_,"AaronOpenGL",NULL,NULL);
    
    if(!window_){
        std::cout<<"Failed to create window\n";
        glfwTerminate();
        return false;
    }
    std::cout<<"successfully created window\n";
    glfwMakeContextCurrent(window_);

    if(init_glad()){
        std::cout<<"initialized glad!!!\n";
        glViewport(0,0,width_,height_);
        glfwSetFramebufferSizeCallback(window_,frame_buffer_size_cb);
        return true;
    }
    return false;
}


bool glfw::window::init_glad(){
    return gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);
}

bool glfw::window::init_window(){
    return init_glfw();
}

