//#include <iostream>
//#include <algorithm>
//
//#include "../../String.h"
//
//using namespace std;
//
//
//template<typename Iter, typename T>
//Iter my_find(Iter first, Iter last, const T& value)
//{
//	while(first != last)
//	{
//		if(value == *first)
//		{
//			return first;
//		}
//		++first;
//	}
//	return last;
//}
//
//
//int main()
//{
//	String s{"the quick brown fox jumps over the lazy dog"};
//
//	// [����] s�� ã�� ���ڰ� �ִ��� �˷�����.
//	// �ִٸ� �� ��°���� ���.
//
//	char tgt{0};
//	while(true)
//	{
//		cout << "\nEnter the target: ";
//		if((cin >> tgt).eof())
//		{
//			break;
//		}
//
//		auto iter = my_find(s.begin(), s.end(), tgt);
//		
//		if(iter != s.end())
//		{
//			cout << tgt << "�� " << distance(s.begin(), iter) + 1 << "�� ° �ֽ��ϴ�." << endl;
//		}
//		else
//		{
//			cout << "CANNOT FIND " << tgt << endl;
//		}
//	}
//
//}