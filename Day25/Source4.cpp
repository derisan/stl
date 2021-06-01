#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// [문제] 모두 몇 단어인지 출력

int main()
{
	ifstream in("단어들.txt");

	vector<string> v;
	v.reserve(40'0000);

	string w;
	while(in >> w)
	{
		v.push_back(w);
	}

	cout << v.size() << endl;
}