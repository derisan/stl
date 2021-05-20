#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
#include <concepts>

#include "../String.h"

using namespace std;

template<typename Iter, typename fn>
int my_count_if(Iter first, Iter last, fn p)
{
	int cnt = 0;

	while(first != last)
	{
		if(p(*first))
		{
			++cnt;
		}
		++first;
	}

	return cnt;
}

template<class Iter>
ptrdiff_t my_distance(Iter first, Iter last)
{
	// if constexpr --> 선택적 컴파일
	if constexpr (contiguous_iterator<Iter>)
	{
		return last - first;
	}
	
	else
	{
		int dist = 0;
		while(first != last)
		{
			++first;
			++dist;
		}

		return dist;
	}
}

int main()
{
	ifstream in("Source2.cpp");

	if(!in)
	{
		cout << "CANNOT OPEN FILE" << endl;
	}

	vector<String> v{istream_iterator<String>{in}, {}};

	auto cnt = my_count_if(v.begin(), v.end(), [](const String& s)
						   {
							   if(s.size() <= 4)
							   {
								   cout << s << endl;
								   return true;
							   }
							   return false;
						   });

	cout << "개수: " << cnt << endl;


	list<int> l{1,2,3,4,5};
	auto dist = my_distance(l.begin(), l.end()); // list의 반복자는 operator-를 오버로딩하지 않았기에 오류.
	cout << "거리: " << dist << endl;

	vector<int> v{1,2,3};
	dist = my_distance(v.end(), v.begin());
	cout << "거리: " << dist << endl;
}