//#include <iostream>
//#include <vector>
//#include <fstream>
//#include <string>
//#include <list>
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
//	vector<list<string>> anagrams;
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
//
//		list<string> temp;
//		for(auto iter = i; iter < j; ++iter)
//		{
//			out << iter->first << " " << iter->second << "\n";
//			temp.push_back(iter->second);
//		}
//
//		anagrams.push_back(std::move(temp));
//
//		cnt++;
//		b = j;
//	}
//
//	cout << cnt << endl;
//
//	ofstream out2{"개수순애너그램.txt"};
//
//	sort(anagrams.begin(), anagrams.end(), [](const list<string>& a, const list<string>& b) {
//		return a.size() > b.size();
//		 });
//
//	int num{0};
//	for(auto& anagram : anagrams)
//	{
//		out2 << "[" << num++ << "] - ";
//		anagram.sort();
//		copy(anagram.begin(), anagram.end(), ostream_iterator<string>{out2, "  "});
//		out2 << endl;
//	}
//}
