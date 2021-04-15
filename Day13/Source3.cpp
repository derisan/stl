#include <iostream>
#include <list>

#include "../String.h"

using namespace std;

/**
* ��𿡼��� ���Ҹ� �߰�/�����ϴ� ������ O(1)
* list, forward_list
*/


int main()
{
	list<String> c{ 1,3,2,4 };

	for (const auto& s : c)
		cout << s << " ";
	cout << endl;

	c.sort([](const String& a, const String& b) { return a.size() < b.size(); });
	for (const auto& s : c)
		cout << s << " ";
	cout << endl;

	c.reverse();
	for (const auto& s : c)
		cout << s << " ";
	cout << endl;
}