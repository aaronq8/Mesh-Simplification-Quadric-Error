#include "vertex.h"

void gl::vertex::load_vertex_in_vbo(){
    glGenBuffers(1,&vbo_);
    glBindBuffer(GL_ARRAY_BUFFER,vbo_);
    glBufferData(GL_ARRAY_BUFFER,sizeof(vertices_),vertices_,GL_STATIC_DRAW);
    glBindBuffer(GL_ARRAY_BUFFER,0);//reset
}

gl::vertex::vertex() : vbo_{0}
{
    for(int i=0;i<3*3;i++)vertices_[i] = 0.0f;
    vertices_[0] = 0.0f;vertices_[1] = 0.5f;
    vertices_[3] = -0.5f;vertices_[4] = 0.0f;
    vertices_[6] = 0.5f; vertices_[7] = 0.0f;

}