#pragma once

#include <glad/glad.h>
#include <GLFW/glfw3.h>


namespace gl{
    class vertex{
        public:
            float vertices_[4*3];
            int indices_[6];
            unsigned int vbo_,vao_,ebo_;
            void load_vertex_in_vbo();
            vertex();
    };
};