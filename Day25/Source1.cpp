//#include <iostream>
//#include <numeric>
//#include <algorithm>
//#include <vector>
//#include <random>
//
//using namespace std;
//
//template<class T>
//void PrintVector(const vector<T>& v)
//{
//	for(auto& e : v)
//	{
//		cout << e << " ";
//	}
//	cout << endl << endl;;
//}
//
//
//int main()
//{
//	vector<int> v(100);
//
//	iota(v.begin(), v.end(), 1);
//
//	mt19937 g(random_device{}());
//
//	{
//		shuffle(v.begin(), v.end(), g);
//
//		PrintVector(v);
//
//		sort(v.begin(), v.end());
//
//		PrintVector(v);
//	}
//
//	{
//		cout << "partial_sort: " << endl;
//
//		shuffle(v.begin(), v.end(), g);
//
//		PrintVector(v);
//
//		partial_sort(v.begin(), v.begin() + 5, v.end());
//
//		PrintVector(v);
//	}
//
//	{
//		cout << "nth_element: " << endl;
//
//		shuffle(v.begin(), v.end(), g);
//
//		PrintVector(v);
//
//		nth_element(v.begin(), v.begin() + 30, v.end());
//
//		PrintVector(v);
//	}
//}