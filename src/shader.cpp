#include "shader.h"
#include <iostream>
#include <fstream>
#include <sstream>  // for std::stringstream


std::string gl::shader::read_file(std::string& shader_path){
    std::ifstream shader_ifs{shader_path};  // Replace with your file name

    // Check if the file was successfully opened
    if (!shader_ifs) {
        std::cerr << "Error opening file!" << std::endl;
        return "";
    }

    // Use a stringstream to read the whole file content into a string
    std::stringstream buffer;
    buffer << shader_ifs.rdbuf();

    shader_ifs.close();

    // Convert the stringstream buffer to a string
    return buffer.str();
}

bool gl::shader::load_vertex_shader(std::string& vertex_shader_path){
    vertex_shader_source_ = read_file(vertex_shader_path);
    return !vertex_shader_source_.empty();
}

bool gl::shader::load_fragment_shader(std::string& fragment_shader_path){
    fragment_shader_source_ = read_file(fragment_shader_path);
    return !vertex_shader_source_.empty();
}

bool gl::shader::compile_shaders(std::string& vertex_shader_path, std::string& fragment_shader_path){
    if(load_vertex_shader(vertex_shader_path) && load_fragment_shader(fragment_shader_path)){

        std::cout<<"vertex shader source\n"<<vertex_shader_source_<<"\n";
        std::cout<<"fragment shader source\n"<<fragment_shader_source_<<"\n";

        vertex_shader_ = glCreateShader(GL_VERTEX_SHADER);
        const char* vs_src = vertex_shader_source_.c_str();
        glShaderSource(vertex_shader_,1,&(vs_src),NULL);
        glCompileShader(vertex_shader_);
        //check compilation result
        int success;
        char infoLog[512];
        glGetShaderiv(vertex_shader_,GL_COMPILE_STATUS,&success);
        if(!success) return false;

        fragment_shader_ = glCreateShader(GL_FRAGMENT_SHADER);
        const char* fs_src = fragment_shader_source_.c_str();
        glShaderSource(fragment_shader_,1,&fs_src,NULL);
        glCompileShader(fragment_shader_);
        //check compilation result
        glGetShaderiv(fragment_shader_,GL_COMPILE_STATUS,&success);
        if(!success) return false;

        return true;
    }
    return false;
}

bool gl::shader::use_shaders(){
    shader_program_ = glCreateProgram();
    glAttachShader(shader_program_,vertex_shader_);
    glAttachShader(shader_program_,fragment_shader_);
    glLinkProgram(shader_program_);

    int success=0;
    glGetProgramiv(shader_program_,GL_LINK_STATUS, &success);
    if(!success) return false;

    glUseProgram(shader_program_);
    //delete shaders
    glDeleteShader(vertex_shader_);
    glDeleteShader(fragment_shader_);

    return true;
}

unsigned int gl::shader::get_shader_program(){
    return shader_program_;
}
