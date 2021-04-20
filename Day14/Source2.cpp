#include <iostream>
#include <list>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <string>

using namespace std;

// [���� ����] �ҽ� ���Ͽ� �ִ� �ܾ ������ ����϶�
// ������ ����
// e.g. gnisu ecapseman dts;

template<typename T>
void Print(const list<T>& cont)
{
	for (auto iter = cont.begin(); iter != cont.end(); ++iter)
		cout << *iter << " ";
	cout << endl;
}

int main()
{
	list<int> l1{ 1,3,5,7,9 };
	list<int> l2{ 2,4,6,8,10 };

	list<int> l3;
	l3.merge(l1);
	l3.merge(l2);

	Print(l1);
	Print(l2);
	Print(l3);
}