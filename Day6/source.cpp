//// Day6
//// Callable type : STL에서 알고리즘의 동작을 제어할 목적으로 사용한다.
//
//#include <iostream>
//
//using namespace std;
//
//void jump()
//{
//	cout << "DO JUMP" << endl;
//}
//
//void slide()
//{
//	cout << "DO SLIDE" << endl;
//}
//
//int main()
//{
//	// main 함수의 주소
//	cout << main << endl;
//
//	// jump의 주소
//	auto pf = jump;
//	cout << pf << endl;
//
//	// slide의 주소
//	pf = slide;
//	cout << pf << endl;
//
//	// 지역변수 pf의 주소
//	cout << &pf << endl;
//
//	// 지역변수 a의 주소
//	int a{ 0 };
//	cout << &a << endl;
//}