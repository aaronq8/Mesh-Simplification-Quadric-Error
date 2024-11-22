#include <iostream>
#include "window.h"
#include "vertex.h"
#include "shader.h"

int main(int argc,char** argv){
    std::cout<<"Hello world\n";
    glfw::window glfw_window{800,600};
    if(glfw_window.init_window()){
        //load vertex into VBO
        gl::vertex vertex_data{};
        vertex_data.load_vertex_in_vbo();
        //compile shaders
        gl::shader shader_l;
        std::string vs_source{"./shaders/vertexShader.glsl"},fs_source{"./shaders/fragmentShader.glsl"};
        if(shader_l.compile_shaders(vs_source,fs_source) && shader_l.use_shaders()){
            std::cout<<"successfully initialized shaders!!\n";
            glBindVertexArray(vertex_data.vao_);
            //render loop 1 iteration = 1 frame
            while(!glfwWindowShouldClose(glfw_window.window_)){
                //input
                glfw_window.process_input();
                glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
                //render scene to back buffer
                //glDrawArrays(GL_TRIANGLES,0,4);//0th vertex , 3 count
                glDrawElements(GL_TRIANGLES,6,GL_UNSIGNED_INT,0);
                //swap buffers
                glfwSwapBuffers(glfw_window.window_);
                glfwPollEvents();
            }
        }

        

        //terminate
        glfwTerminate();
    }
    else std::cout<<"failed to init window\n";
    return 0;
}