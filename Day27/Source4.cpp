#include <iostream>
#include <vector>
#include <algorithm>
#include <ranges>

using namespace std;


int main()
{
	vector<int> v{1,3,5,7,9,2,4,6,8,10};

	auto even = v | ranges::views::filter([](int n) {return !(n & 1); }); // lazy evaluation

	for(auto n : even)
	{
		cout << n << endl;
	}
}