#include <iostream>
#include <set>
#include <iterator>
#include <algorithm>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	ifstream in{"Source1.cpp"};

	set<string> s;

	copy(istream_iterator<string>{in}, {}, inserter(s, s.begin()));

	for(const auto& w : s)
		cout << w << endl;
}