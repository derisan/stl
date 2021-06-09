//#include <iostream>
//#include <vector>
//#include <fstream>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//using String = pair<string, string>;
//
//int main()
//{
//	ifstream in{"단어들.txt"};
//
//	vector<String> words;
//	words.reserve(369882);
//
//	string str;
//	while(in >> str)
//	{
//		string orig = str;
//
//		sort(str.begin(), str.end());
//
//		words.emplace_back(str, orig);
//	}
//
//	sort(words.begin(), words.end(), [](const String& a, const String& b) {
//		return a.first < b.first;
//		 });
//
//
//	ofstream out{"애너그램쌍.txt"};
//
//	int cnt{0};
//	auto b = words.begin();
//	while(true)
//	{
//		auto i = adjacent_find(b, words.end(), [](const String& a, const String& b) {
//			return a.first == b.first;
//							   });
//
//		if(i == words.end())
//		{
//			break;
//		}
//
//		auto j = find_if_not(i + 1, words.end(), [i](const String& a) {
//			return a.first == i->first;
//							 });
//
//		for(auto iter = i; iter < j; ++iter)
//		{
//			out << iter->first << " " << iter->second << "\n";
//		}
//
//		cnt++;
//		b = j;
//	}
//
//	cout << cnt << endl;
//}