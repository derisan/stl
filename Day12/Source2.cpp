//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <iterator>
//
//using namespace std;
//
//// ���� v���� Ȧ���� �����϶�.
//
//int main()
//{
//	vector<int> v{ 1,2,3,4,5,6,7,8,9,10 };
//	v.erase(remove_if(v.begin(), v.end(), [](int n) { return (n & 1); }), v.end());
//	copy(v.begin(), v.end(), ostream_iterator<int>{cout, " "});
//	v.shrink_to_fit();
//}