//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//#include "../String.h"
//
//using namespace std;
//
//int main()
//{
//	vector<String> v{ 1,2,3,4,5,6,7,8,9,10 };
//
//	//v.erase(remove_if(v.begin(), v.end(), [](const String& s) {
//	//	return (s.size() & 1); }), v.end());
//
//	// Since C++20
//	erase_if(v, [](const String& s) { return (s.size() & 1); });
//
//	for (const auto& s : v)
//		cout << s << endl;
//}