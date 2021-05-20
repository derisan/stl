//#include <random>
//#include <map>
//#include <iomanip>
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	mt19937 eng(random_device{}());
//	uniform_int_distribution<int> uid(1, 100000);
//
//	vector<int> v;
//
//	v.reserve(1'00000);
//
//	for(int i = 0 ; i < 10'0000; ++i)
//		v.push_back(uid(eng));
//
//	map<int, int> m;
//
//	for(auto n : v)
//	{
//		++m[n / 1000];
//	}
//
//	for(const auto& pr : m)
//	{
//		cout << setw(10) << left << pr.first * 10000 << " : " << pr.second << endl;
//	}
//}