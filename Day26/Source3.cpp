#include <iostream>
#include <algorithm>
#include <fstream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
	ifstream in{"�ܾ��.txt"};

	unordered_multimap<string, string> words;

	string str;
	while(in >> str)
	{
		string origin = str;
		sort(str.begin(), str.end());

		words.emplace(str, origin);
	}

	cout << "������ ����ִ� �ܾ��� ����: " << words.size() << endl;


	// [����] ��� �ֳʱ׷� �� ���!
}