#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// [����] ��� �� �ܾ����� ���

int main()
{
	ifstream in("�ܾ��.txt");

	vector<string> v;
	v.reserve(40'0000);

	string w;
	while(in >> w)
	{
		v.push_back(w);
	}

	cout << v.size() << endl;
}