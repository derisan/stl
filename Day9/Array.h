#pragma once

template <typename T, int N>
class Array
{
public:
	Array() = default;

	size_t size() const { return N; }

	T operator[]( size_t idx ) const { return data[idx]; }
	T& operator[]( size_t idx ) { return data[idx]; }

	T* begin() { return data; }
	T* end() { return data + N; }

private:
	T data[N];
};
