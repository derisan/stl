//#include <set>
//#include <iterator>
//#include <iostream>
//#include <fstream>
//#include <algorithm>
//
//#include "../String.h"
//
//using namespace std;
//
//int main()
//{
//	ifstream in{"Source.cpp"};
//
//	if(!in)
//	{
//		cout << "FAILED TO OPEN FILE" << endl;
//	}
//
//	auto Less = [](const String& lhs, const String& rhs)
//	{
//		return lhs.size() < rhs.size();
//	};
//
//	set<String, decltype(Less)> code{istream_iterator<String>{in}, {}, Less};
//
//	for(const auto& s : code)
//	{
//		cout << s << endl;
//	}
//}