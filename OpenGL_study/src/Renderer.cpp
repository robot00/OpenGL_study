#include "Renderer.h"

void Renderer::clear() const
{
    GLCall(glClear(GL_COLOR_BUFFER_BIT));
}

void Renderer::draw(const VertexArray& va, const IndexBuffer& ib, const Shader& shader) const
{
    va.bind();
    ib.bind();
    shader.bind();

    GLCall(glDrawElements(GL_TRIANGLES, ib.get_count(), GL_UNSIGNED_INT, nullptr));
}
