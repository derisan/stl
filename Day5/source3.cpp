//// ������ Class(�ڿ��� Ȯ���ϴ�) �����
//// ȣ�� ������ Ÿ�� Callable type
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
//	// ���ٴ� Ŭ������ �����Ǿ� �ִ�.
//	// operator()�� �����ε���.
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
//	cout << "����" << endl;
//}
//
//void Slide()
//{
//	cout << "�����̵�" << endl;
//}
//
//void (*left_function)(void) = Jump;
//void left()
//{
//	left_function();
//}