//#include <iostream>
//#include <vector>
//#include <deque>
//
//
//using namespace std;
//
//
///**
//* deque은 실제 메모리가 연속되어 있지 않다.
//* 객체 뭉치의 리스트
//* vector는 메모리가 연속되어야 한다. 그것이 단점으로 작용하기도 함.
//* deque은 객체 뭉치를 나눠서 저장할 수 있기 때문에 vector보다 더 많은 개수의 객체를 저장할 수 있다.
//*/
//
//
//int main()
//{
//	vector<int> v;
//
//	try
//	{
//		while (true)
//		{
//			v.push_back(0);
//		}
//	}
//	catch (exception& e)
//	{
//		cout << v.size() << endl;
//		cout << e.what() << endl;
//	}
//
//	deque<int> d;
//
//	try
//	{
//		while (true)
//		{
//			d.push_back(0);
//		}
//	}
//	catch (exception& e)
//	{
//		cout << d.size() << endl;
//		cout << e.what() << endl;
//	}
//}