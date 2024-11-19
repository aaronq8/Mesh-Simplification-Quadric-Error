cmake_minimum_required(VERSION 3.2)

project(Mesh_Simplification)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_VERBOSE_MAKEFILE true)

set(SRC 
    ${PROJECT_SOURCE_DIR}/src/main.cpp
    ${PROJECT_SOURCE_DIR}/src/window.cpp
    ${PROJECT_SOURCE_DIR}/dependency/glad/src/glad.c
)

#dependency headers
set(GLFW_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/dependency/glfw-3.4/include)
set(GLAD_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/dependency/glad/include)
set(INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)

add_subdirectory(${PROJECT_SOURCE_DIR}/dependency/glfw-3.4)

add_executable(main ${SRC})

target_include_directories(main PRIVATE ${GLAD_INCLUDE_DIR} ${GLFW_INCLUDE_DIR} ${INCLUDE_DIR})

target_link_libraries(main glfw GL)