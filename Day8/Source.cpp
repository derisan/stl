#include <iostream>
#include <array>
#include <algorithm>
#include <iterator>

#include "String.h"

using namespace std;

template <typename T, int N>
class Array
{
public:
	Array() = default;
	
	size_t size() const { return N; }

	T operator[]( size_t idx ) const { return data[idx]; }
	T& operator[]( size_t idx )	{ return data[idx]; }

	T* begin() { return data; }
	T* end() { return data + N; }

private:
	T data[N];
};

int main()
{
	Array<String, 3> a;
	
	for( auto iter = a.begin(); iter != a.end(); ++iter )
		cout << *iter << endl;
}