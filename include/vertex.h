#pragma once

#include <glad/glad.h>
#include <GLFW/glfw3.h>


namespace gl{
    class vertex{
        public:
            float vertices_[3*3];
            unsigned int vbo_,vao_;
            void load_vertex_in_vbo();
            vertex();
    };
};