//#include <vector>
//#include <iostream>
//#include <iterator>
//
//using namespace std;
//
//// [문제] vector는 4바이트인 멤버 변수가 3개가 있다
//// 동적할당한 시작 주소
//// 동적할당한 마지막 주소
//// 예약 메모리의 마지막 주소
//
//// 동적할당한 주소값을 가져와서 그 주소의 내용을 v.size()만큼 출력한다면 모든 원소의 값을 출력하는 것이다.
//
//int main()
//{
//	vector<int> v{ 1,2,3 };
//
//	cout << sizeof( v ) << endl;
//
//	//int** p = reinterpret_cast<int**>(&v);
//	//for( int i = 0; i < v.size(); ++i )
//	//	cout << *(*p + i) << ", ";
//	//cout << endl;
//}