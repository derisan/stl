//#include <iostream>
//#include <numeric>
//#include <string>
//#include <vector>
//#include <thread>
//#include <algorithm>
//
//using namespace std;
//
//// [문제1] std::rotate()를 이용한 원소 회전
//// sort 관련 함수들을 이해하고 구분해서 사용할 수 있다
//
//// 1. std::sort  vs.  std::stable_sort
//
//
//int main()
//{
//	vector<pair<int, int>> v;
//
//	for(int i = 0; i < 100; ++i)
//	{
//		v.emplace_back((i + 1) % 10, 100 - i);
//	}
//
//	for(const auto& [first, second] : v)
//	{
//		cout << first << " - " << second << endl;
//	}
//
//	sort(v.begin(), v.end(), [](const pair<int, int>& p1, const pair<int, int>& p2) {
//		return p1.first < p2.first;
//		 });
//
//
//	cout << endl << endl;
//
//	for(const auto& [first, second] : v)
//	{
//		cout << first << " - " << second << endl;
//	}
//}