#include <iostream>
#include <algorithm>
#include <fstream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
	ifstream in{"단어들.txt"};

	unordered_multimap<string, string> words;

	string str;
	while(in >> str)
	{
		string origin = str;
		sort(str.begin(), str.end());

		words.emplace(str, origin);
	}

	cout << "사전에 들어있는 단어의 개수: " << words.size() << endl;


	// [문제] 모든 애너그램 쌍 출력!
}