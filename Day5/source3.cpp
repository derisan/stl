//// 관찰용 Class(자원을 확보하는) 만들기
//// 호출 가능한 타입 Callable type
//
//#include <iostream>
//
//using namespace std;
//
//void foo( int n )
//{
//	cout << "I'm foo" << endl;
//}
//
//class Test
//{
//public:
//	void operator()( int )
//	{
//		cout << "I'm test." << endl;
//	}
//
//	void SayHello()
//	{
//		cout << "Hello?" << endl;
//	}
//
//	void (*m)(int) = foo;
//	void (Test::*p)() = SayHello;
//};
//
//int main()
//{
//	// 람다는 클래스로 구현되어 있다.
//	// operator()를 오버로딩한.
//	auto x = []() {
//		cout << "ASdf" << endl;
//	};
//
//	void (*bar)(int) = foo;   // auto bar = foo;
//	bar( 5 );
//	Test()(3);
//	Test t;
//	t( 5 );
//	t.m( 3 );
//}
//
//void Jump()
//{
//	cout << "점프" << endl;
//}
//
//void Slide()
//{
//	cout << "슬라이드" << endl;
//}
//
//void (*left_function)(void) = Jump;
//void left()
//{
//	left_function();
//}