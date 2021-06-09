//#include <fstream>
//#include <iostream>
//#include <iterator>
//#include <map>
//#include <algorithm>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//using String = pair<string, int>;
//
//int main()
//{
//	// [문제] "애너그램쌍.txt" 파일을 읽어서 애너그램 쌍이 많은 단어 순으로 정렬.
//
//	
//	ifstream in{"애너그램쌍.txt"};
//
//
//	map<string, int> words;
//	string key;
//	string value;
//	while(in >> key >> value)
//	{
//		words[key]++;
//	}
//
//	vector<String> v{make_move_iterator(words.begin()), make_move_iterator(words.end())};
//
//	sort(v.begin(), v.end(), [](const String& a, const String& b){
//		return a.second > b.second;
//		 });
//
//
//	for(int i = 0; i < 10; i++)
//	{
//		cout << v[i].first << " - " << v[i].second << endl;
//	}
//}
//
//
// //vector<string> v{istream_iteartor<string>{in}, {}};
//// reserve()??
