//#include <iostream>
//#include <vector>
//#include <deque>
//
//
//using namespace std;
//
//
///**
//* deque�� ���� �޸𸮰� ���ӵǾ� ���� �ʴ�.
//* ��ü ��ġ�� ����Ʈ
//* vector�� �޸𸮰� ���ӵǾ�� �Ѵ�. �װ��� �������� �ۿ��ϱ⵵ ��.
//* deque�� ��ü ��ġ�� ������ ������ �� �ֱ� ������ vector���� �� ���� ������ ��ü�� ������ �� �ִ�.
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