//#include <iostream>
//#include <unordered_set>
//
//#include "../String.h"
//
//using namespace std;
//
//
//// template<>
//// struct std::hash<String>
//// {
//// 	size_t operator()(const String& s) const
//// 	{
//// 		return std::hash<string>()(s.getString());
//// 	}
//// };
//
//int main()
//{
//	unordered_set<String> MyStrs;
//
//	MyStrs.emplace(1);
//	MyStrs.emplace(2);
//	MyStrs.emplace(3);
//	MyStrs.emplace(4);
//	MyStrs.emplace(4);
//
//	for(const auto& str : MyStrs)
//	{
//		cout << str << endl;
//	}
//}