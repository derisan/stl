//#include <iostream>
//#include <algorithm>
//#include <fstream>
//#include <map>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//// [문제1] Source.cpp 의 알파벳/단어 빈도 수를 출력하라!
//// [문제2] 빈도 오름차순으로 출력하라!
//
//
//int main()
//{
//	using fruit = string;
//	using price = int;
//
//	map<fruit, price> m;
//
//	m.insert(make_pair("사과", 1500));
//
//	auto p = m["바나나"];
//
//	cout << p << endl;
//
//
//	ifstream in("Source.cpp");
//
//	map<char, int> words;
//	char word;
//	while(in >> word)
//	{
//		if(isalpha(word))
//		{
//			++words[word];
//		}
//	}
//
//	for(const auto& pr : words)
//	{
//		cout << pr.first << ": " << pr.second << endl;
//	}
//
//	cout << endl << endl;
//
//
//	// multimap 사용
//	multimap<int, char/*, greater<int>*/> w;
//
//	for(const auto& pr : words)
//	{
//		auto ch = tolower(pr.first);
//		w.emplace(pr.second, ch);	
//	}
//
//	for(const auto& pr : w)
//	{
//		cout << pr.first << ": " << static_cast<char>(pr.second) << endl;
//	}
//	cout << endl << endl;
//
//
//	// vector 사용(빈도 내림차순)
//	vector<pair<char, int>> v(words.begin(), words.end());
//	sort(v.begin(), v.end(), [](const auto& a, const auto& b) {
//		return a.second > b.second;
//		 });
//
//	//for(const auto& pr : v)
//	//{
//	//	cout << pr.first << ": " << pr.second << endl;
//	//}
//
//	for(const auto& [ch, freq] : v)
//	{
//		cout << ch << " : " << freq << endl;
//	}
//}
//
//// map 컨테이너의 key로 사용할 클래스는 반드시 operator<()를 오버로딩해야 한다!
