#pragma once

#include <GL/glew.h>
#include <iostream>

#include "Common.h"
#include "VertexArray.h"
#include "IndexBuffer.h"
#include "Shader.h"

class VertexArray;
class IndexBuffer;
class Shader;

class Renderer
{
public:
    void clear() const;
    void draw(const VertexArray& va, const IndexBuffer& ib, const Shader& shader) const;
};