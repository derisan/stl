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
//	// [����] "�ֳʱ׷���.txt" ������ �о �ֳʱ׷� ���� ���� �ܾ� ������ ����.
//
//	
//	ifstream in{"�ֳʱ׷���.txt"};
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
