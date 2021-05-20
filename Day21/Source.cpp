//#include <iostream>
//#include <algorithm>
//#include <fstream>
//#include <map>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//// [����1] Source.cpp �� ���ĺ�/�ܾ� �� ���� ����϶�!
//// [����2] �� ������������ ����϶�!
//
//
//int main()
//{
//	using fruit = string;
//	using price = int;
//
//	map<fruit, price> m;
//
//	m.insert(make_pair("���", 1500));
//
//	auto p = m["�ٳ���"];
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
//	// multimap ���
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
//	// vector ���(�� ��������)
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
//// map �����̳��� key�� ����� Ŭ������ �ݵ�� operator<()�� �����ε��ؾ� �Ѵ�!
