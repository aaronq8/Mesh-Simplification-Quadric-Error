#include <iostream>
#include "window.h"

int main(int argc,char** argv){
    std::cout<<"Hello world\n";
    glfw::window glfw_window{800,600};
    if(glfw_window.init_window()){
        //render loop 1 iteration = 1 frame
        while(!glfwWindowShouldClose(glfw_window.window_)){
            //input
            glfw_window.process_input();
            //render scene to back buffer
            glClearColor(0.0f,1.0f,0.0f,1.0f);
            glClear(GL_COLOR_BUFFER_BIT);
            //swap buffers
            glfwSwapBuffers(glfw_window.window_);
            glfwPollEvents();
        }

        //terminate
        glfwTerminate();
    }
    else std::cout<<"failed to init window\n";
    return 0;
}