#include "vertex.h"

void gl::vertex::load_vertex_in_vbo(){
    //vao stores currently bound ARRAY_BUFFER && ELEMENT_ARRAY_BUFFER
    glGenVertexArrays(1,&vao_);    
    glGenBuffers(1,&vbo_);
    glGenBuffers(1,&ebo_);

    glBindVertexArray(vao_);
    glBindBuffer(GL_ARRAY_BUFFER,vbo_);
    glBufferData(GL_ARRAY_BUFFER,sizeof(vertices_),vertices_,GL_STATIC_DRAW);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ebo_);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices_), indices_.data(), GL_STATIC_DRAW);

    //vertex attrib 0 => vec3(x,y,z)
    glVertexAttribPointer(0,3,GL_FLOAT,GL_FALSE,6*sizeof(float), (void*)0);
    glEnableVertexAttribArray(0);
    //vertex attrib 1 => vec3(r,g,b)
    glVertexAttribPointer(1,3,GL_FLOAT,GL_FALSE,6*sizeof(float),(void*)(3*sizeof(float)));
    glEnableVertexAttribArray(1);
    
    glBindVertexArray(0);//reset
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER,0);//reset
    glBindBuffer(GL_ARRAY_BUFFER,0);//reset
}

gl::vertex::vertex() : vbo_{0},vao_{0},ebo_{0},indices_{6,0}
{

    indices_[0]=0;indices_[1] = 1;indices_[2] = 0;indices_[3] = 1;
    indices_[4] = 2;indices_[5] = 0;
    
}