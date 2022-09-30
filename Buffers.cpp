#include "Buffers.h"

Buffer::Buffer()
{
    glGenBuffers(1, &id)
};

void Buffer::bind()
{
    glBindBuffer(getTarget(), id);
}

void Buffers::unbind()
{
    glBindBuffer(getTarget(), 0);
}