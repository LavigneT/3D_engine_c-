#pragma once

class IndexBuffer {
private:
	unsigned int mRendererID;
	unsigned int mCount;
public:
	IndexBuffer(const unsigned int* data, unsigned int count);
	~IndexBuffer();

	void bind() const;
	void unbind() const;

	inline unsigned int getCount() const { return mCount; }
};
