#include <iostream>

#include "../../String.h"

using namespace std;

int main()
{
	String s{"12345678"};

	for(auto i = s.rbegin(); i != s.rend(); ++i)
	{
		cout << *i << " ";
	}
	cout << endl;
}