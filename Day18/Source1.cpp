//#include <iostream>
//#include <vector>
//#include <concepts>
//
//#include "../String.h"
//
//using namespace std;
//
//template<typename Iter, typename fn>
//Iter my_find_if(Iter first, Iter last, fn p)
//{
//	while(first != last)
//	{
//		if(p(*first))
//		{
//			return first;
//		}
//		++first;
//	}
//	return last;
//}
//
//
//int main()
//{
//	vector<String> v{"1", "12", "123", "1234", "12345"};
//
//	auto iter = my_find_if(v.begin(), v.end(), [](const String& s)
//						   {
//							   return s.size() == 4;
//						   });
//
//	cout << *iter << endl;
//}