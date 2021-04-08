//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//// vector의 세 필드
//
//int main()
//{
//	vector<int> v{ 1,2,3,4,5 };
//
//	int** p = reinterpret_cast<int**>(&v);
//	cout << **p << endl;				// 1
//	cout << *(*p + 1) << endl;			// 2
//
//	for( int i = 0; i < v.size(); ++i )
//		cout << *(*p + i) << " ";
//}