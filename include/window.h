#pragma once

#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

namespace glfw{
    class window{
        public:
            window(int width,int height);
            bool init_window();
            void process_input();
            GLFWwindow* window_;
        private:
            bool init_glfw();
            bool init_glad();
            window() = delete;
            int width_,height_,enable_wf_mode_,pressed_f_;
    };
    void frame_buffer_size_cb(GLFWwindow* window,int width,int height);
};