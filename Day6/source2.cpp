//// ȣ���� �� �ִ� Ÿ���� �����ϰ� ���� �ٸ��� ������ �� ������?
//// function Ÿ���� ������� ����
//
//#include <iostream>
//#include <functional>
//
//using namespace std;
//
//// 1. �Ϲ��Լ�
//void foo( int )
//{
//	cout << "�Ϲ��Լ�" << endl;
//}
//
//// 2. �Լ� ��ü(functor)
//// �Ϲ��Լ����� ����?
//// �Լ���ü�� �ڱ� ���¸� ����� �� �ִ�. �ֳĸ� ��� ������ ������ �����ϱ�.
//class Test
//{
//public:
//	// Function call operator overloading
//	void operator()( int ) const
//	{
//		cout << "�Լ���ü" << endl;
//	}
//
//	// 4. �޼���
//	// ��� �޼����� ù ��° ���ڷ� this �����Ͱ� ���´�.
//	// �Լ��� �ϳ����� ��ü�� ������ ���� �� �ֱ� �����̴�.
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
//	// 3. ����
//	auto lambda = []( int ) {
//		cout << "����" << endl;
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
//	// Callable type�� ����!
//	function<void( int )> ct;
//	ct = foo;
//	ct( 5 );
//	ct = t;
//	ct( 5 );
//	ct = lambda;
//	ct( 5 );
//}