//#include <iostream>
//#include <numeric>
//#include <string>
//#include <vector>
//#include <thread>
//#include <algorithm>
//
//using namespace std;
//
//// [����1] std::rotate()�� �̿��� ���� ȸ��
//// sort ���� �Լ����� �����ϰ� �����ؼ� ����� �� �ִ�
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