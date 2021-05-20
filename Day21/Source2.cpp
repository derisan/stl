#include <iostream>
#include <unordered_set>

#include "../String.h"

using namespace std;



int main()
{
	// [����] ���Ҹ� �߰��ϸ� ����ؼ� unordered�� ���� �˾ƺ���

	unordered_set<int> s{1,2,3};
	//char ch;
	//int num = 10;
	//while(cin >> ch)
	//{
	//	num += 10000;
	//	s.insert(num);

	//	for(auto n : s)
	//	{
	//		cout << n << " ";
	//	}
	//	cout << endl;
	//}

	// [����2] unordered_set�� �޸� ������ ȭ�鿡 ����Ѵ�.

	for(int i = 0; i < s.bucket_count(); ++i)
	{
		cout << "[" << i << "]";
		auto num = s.bucket_size(i);

		for(auto p = s.begin(i); p != s.end(i); ++p)
		{
			cout << *p << "-";
		}
		cout << endl;
	}

	for(auto n : s)
	{
		cout << n << " ";
	}


	unordered_set<string> t;

	t.emplace("Hello");
	t.emplace("Abcd");
	t.emplace("ppp");
	
	for(auto& n : t)
	{
		cout << n << " ";
	}

	cout << endl;
	for(int i = 0; i < t.bucket_count(); ++i)
	{
		cout << "[" << i << "]";
		

		for(auto p = t.begin(i); p != t.end(i); ++p)
		{
			cout << *p << "-";
		}
		cout << endl;
	}
}