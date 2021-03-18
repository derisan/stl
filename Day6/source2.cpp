//// 호출할 수 있는 타입이 무한하고 서로 다른데 통일할 수 없을까?
//// function 타입이 만들어진 이유
//
//#include <iostream>
//#include <functional>
//
//using namespace std;
//
//// 1. 일반함수
//void foo( int )
//{
//	cout << "일반함수" << endl;
//}
//
//// 2. 함수 객체(functor)
//// 일반함수와의 차이?
//// 함수객체는 자기 상태를 기억할 수 있다. 왜냐면 멤버 변수를 가지고 있으니까.
//class Test
//{
//public:
//	// Function call operator overloading
//	void operator()( int ) const
//	{
//		cout << "함수객체" << endl;
//	}
//
//	// 4. 메서드
//	// 모든 메서드의 첫 번째 인자로 this 포인터가 들어온다.
//	// 함수는 하나지만 객체는 수없이 많을 수 있기 때문이다.
//	void bar( int )
//	{
//		cout << "Test's method" << endl;
//
//	}
//};
//
//int main()
//{
//	foo( 3 );
//	Test t;
//	t( 3 );
//
//	// 3. 람다
//	auto lambda = []( int ) {
//		cout << "람다" << endl;
//	};
//	lambda( 3 );
//
//	void (Test::*mf)(int) = &Test::bar;
//	//auto mf = &Test::bar;
//	(t.*mf)(5);
//
//	Test* pt = new Test{};
//	(pt->*mf)(3);
//
//	// Callable type의 통일!
//	function<void( int )> ct;
//	ct = foo;
//	ct( 5 );
//	ct = t;
//	ct( 5 );
//	ct = lambda;
//	ct( 5 );
//}