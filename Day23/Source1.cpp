#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v{1,2,3,4,5,6,7,8,9,10};

	partition(v.begin(), v.end(), [](int n) {
		return (n & 1);
			  });

	for(auto n : v)
	{
		cout << n << " ";
	}
}