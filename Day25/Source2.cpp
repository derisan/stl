//#include <iostream>
//#include <fstream>
//#include <algorithm>
//#include <vector>
//#include <iterator>
//
//using namespace std;
//
//// [����] on sorted ranges...
//// binary_search
//// equal_range
//// lower_bound
//// upper_bound
//
//// �ҽ� ���Ͽ��� �����ڸ��� vector�� ��ƶ�...
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
//	// source�� �����Ѵ�
//	sort(s.begin(), s.end());
//
//	for(auto ch : s)
//	{
//		cout << ch << " ";
//	}
//
//	cout << endl;
//
//	// [����] ������ ���ڰ� �ִ��� Ȯ���Ѵ�
//	// ������ �� �� �ִ��� ����Ѵ�
//	auto pr = equal_range(s.begin(), s.end(), 'a');
//	if(pr.first != s.end())
//	{
//		auto n = distance(pr.first, pr.second);
//
//		cout << n << "�� �ִ�." << endl;
//	}
//	else
//	{
//		cout << "����" << endl;
//	}
//}