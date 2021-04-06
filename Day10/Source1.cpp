//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//// [문제] 객체 v가 차지하는 메모리의 크기를 살펴보자
//int main()
//{
//	vector<int> x;
//	vector<int> y{ 1, 11, 33, 44444, 44444 };
//	vector<string> z;
//
//
//	cout << "x의 메모리 크기: " << x.capacity() * sizeof( int ) << endl;
//	cout << "x의 컨트롤 블록 크기: " << sizeof(x) << endl;
//	cout << "y의 메모리 크기: " << y.capacity() * sizeof( int ) << endl;
//	cout << "y의 컨트롤 블록 크기: " << sizeof(y) << endl;
//	cout << "z의 메모리 크기: " << z.capacity() * sizeof( string ) << endl;
//	cout << "z의 컨트롤 블록 크기: " << sizeof(z) << endl;
//}