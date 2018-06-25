#pragma once

#include "Renderer.h"

class IndexBuffer
{
private:
    unsigned int renderer_id_;
    unsigned int count_;

public:
    IndexBuffer(const unsigned int index[], const unsigned int& count);
    IndexBuffer(const IndexBuffer& other);
    virtual ~IndexBuffer();

    void bind() const;
    void unbind() const;

    inline int get_count() const { return count_; }
};

