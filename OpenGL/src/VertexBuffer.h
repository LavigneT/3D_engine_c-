#pragma once

class VertexBuffer {
private:
	unsigned int mRendererID;
public:
	VertexBuffer(const void* data, unsigned int size);
	~VertexBuffer();

	void bind() const;
	void unbind() const;
};
