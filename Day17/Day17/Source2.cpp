#include <iostream>
#include <algorithm>
#include <vector>

#include "../../String.h"

using namespace std;

template<typename Iter, typename T>
Iter my_find(Iter first, Iter last, const T& value)
{
	while(first != last)
	{
		if(value == *first)
		{
			return first;
		}
		++first;
	}
	return last;
}


int main()
{
	vector<String> v{"123", "4567", "abc"};

	auto p = find(v.begin(), v.end(), "abcd");

	if(p != v.end())
	{
		cout << *p << endl;
	}
}