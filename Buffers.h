#pragma once
#include <iostream>
#include <vector>
#include <GL/glew.h>
#include <GLFW/glfw3.h>

class Buffer {
protected:
    virtual GLuint getTarget() = 0;
public:
    GLuint id;

    void bind();
    void unbind();

    template<typename T>
    void setData(std::vector<T> buffer, GLuint usage)
    {
        glBufferData(getTarget(), sizeof(T) * buffer.size(), buffer.data(), usage);
    }

    Buffer();
};
