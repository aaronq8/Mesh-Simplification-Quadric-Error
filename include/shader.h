#pragma once
#include <string>
#include <glad/glad.h>
#include <GLFW/glfw3.h>


namespace gl{
    class shader{
        public:
            bool compile_shaders(std::string&, std::string&);
            bool use_shaders();//sets current program
            unsigned int get_shader_program();
        private:
            std::string read_file(std::string&);
            bool load_vertex_shader(std::string&);
            bool load_fragment_shader(std::string&);
            std::string vertex_shader_source_,fragment_shader_source_;
            unsigned int vertex_shader_,fragment_shader_,shader_program_;
    };
};