//#include <iostream>
//#include <chrono>
//#include <set>
//#include <unordered_set>
//#include <vector>
//#include <array>
//#include <algorithm>
//
//#include "../String.h"
//
//using namespace std;
//
//constexpr int DATA_COUNTS = 1'0000;
//constexpr int TARGET_COUNTS = 1000;
//
//extern default_random_engine dre;
//uniform_int_distribution<int> uid(0, DATA_COUNTS - 1);
//
//int main()
//{
//	vector<String> data;
//	data.reserve(DATA_COUNTS);
//
//	for(int i = 0; i < DATA_COUNTS; ++i)
//	{
//		data.emplace_back(i + 1);
//	}
//
//	array<String, TARGET_COUNTS> targets;
//
//	for(int i = 0; i < targets.size(); ++i)
//	{
//		targets[i] = data[uid(dre)];
//	}
//
//	auto start = chrono::system_clock::now();
//	for(int i = 0; i < targets.size(); ++i)
//	{
//		auto iter = find(data.begin(), data.end(), targets[i]);
//	}
//	auto elapsed = chrono::system_clock::now() - start;
//	cout << "데이터를 찾는데 걸린 평균 시간: " << chrono::duration_cast<chrono::milliseconds>(elapsed).count() << "ms" << endl;
//
//
//	cout << "논리: " << DATA_COUNTS / 2 * targets.size() << endl;
//	cout << "실제: " << String::CountOperatorCall << endl;
//}