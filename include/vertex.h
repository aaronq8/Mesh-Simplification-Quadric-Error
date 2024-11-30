#pragma once

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <vector>

namespace gl{
    class vertex{
        public:
            float vertices_[3*6] = {
                //x,y,z,r,g,b
                0.5f,-0.5f,0.0f,1.0f,0.0f,0.0f,
                -0.5f,-0.5f,0.0f,0.0f,1.0f,0.0f,
                0.0f,0.5f,0.0f,0.0f,0.0f,1.0f
            };
            std::vector<int> indices_;
            unsigned int vbo_,vao_,ebo_;
            void load_vertex_in_vbo();
            vertex();
    };
};