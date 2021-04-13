#include <iostream>
#include <deque>

#include "String.h"

using namespace std;

int main()
{
	deque<String> d;

	d.emplace_back("back");
	d.emplace_back("front");
	d.emplace_back("middle");


	for (const auto& s : d)
		cout << s << endl;
	cout << endl;
}