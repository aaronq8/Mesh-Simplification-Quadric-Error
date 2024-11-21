#include "vertex.h"

void gl::vertex::load_vertex_in_vbo(){
    //vao
    glGenVertexArrays(1,&vao_);    
    glGenBuffers(1,&vbo_);
    glBindVertexArray(vao_);
    glBindBuffer(GL_ARRAY_BUFFER,vbo_);
    glBufferData(GL_ARRAY_BUFFER,sizeof(vertices_),vertices_,GL_STATIC_DRAW);
    
    glVertexAttribPointer(0,3,GL_FLOAT,GL_FALSE,3*sizeof(float), (void*)0);
    glEnableVertexAttribArray(0);
    
    glBindBuffer(GL_ARRAY_BUFFER,0);//reset
    glBindVertexArray(0);
}

gl::vertex::vertex() : vbo_{0}
{
    for(int i=0;i<3*3;i++)vertices_[i] = 0.0f;
    vertices_[0] = 0.0f;vertices_[1] = 0.5f;
    vertices_[3] = -0.5f;vertices_[4] = 0.0f;
    vertices_[6] = 0.5f; vertices_[7] = 0.0f;

}