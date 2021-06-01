//#include <iostream>
//#include <fstream>
//#include <algorithm>
//#include <vector>
//#include <iterator>
//
//using namespace std;
//
//// [문제] on sorted ranges...
//// binary_search
//// equal_range
//// lower_bound
//// upper_bound
//
//// 소스 파일에서 영문자만을 vector에 담아라...
//
//int main()
//{
//	ifstream in("Source2.cpp");
//
//	vector<char> s;
//
//	char ch;
//	while(in >> ch)
//	{
//		if(isalpha(ch))
//		{
//			s.push_back(ch);
//		}
//	}
//
//	// source를 정렬한다
//	sort(s.begin(), s.end());
//
//	for(auto ch : s)
//	{
//		cout << ch << " ";
//	}
//
//	cout << endl;
//
//	// [문제] 임의의 문자가 있는지 확인한다
//	// 있으면 몇 개 있는지 출력한다
//	auto pr = equal_range(s.begin(), s.end(), 'a');
//	if(pr.first != s.end())
//	{
//		auto n = distance(pr.first, pr.second);
//
//		cout << n << "개 있다." << endl;
//	}
//	else
//	{
//		cout << "없다" << endl;
//	}
//}