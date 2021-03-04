//// STL DAY-2 
//// Build settings : x86, Release
//
//#include "../save.h"
//
//// [����] main()�� �������� �ʰ� ����ǵ��� ����.
//// �տ��� ���� change()�� �ٸ� �ڷ����� �ٲ� �� �ֵ��� ����. (template)
//// Game�� ����� ���� �ڷ���
//
//// Reference & Pointer : �� �������� �ٸ� ������ ��ü�� access �ϱ� ���� ���
//
//class Game
//{
//public:
//	explicit Game( int val )
//		: mVal{ val }
//	{
//	}
//
//	void SetVal( int val ) { mVal = val; }
//	int GetVal() const { return mVal; }
//
//private:
//	int mVal = 0;
//};
//
//ostream& operator<<( ostream& os, const Game& game );
//
//template<class T>
//void Change( T& lhs, T& rhs )
//{
//	swap( lhs, rhs );
//}
//
//int main()
//{
//	//Save( "source.cpp" );
//
//	Game a{ 1 };
//	Game b{ 2 };
//
//	float c{ 3.14f };
//	float d{ 4.52f };
//
//	Change( a, b );
//	Change( c, d );
//
//	cout << a << ", " << b << endl;
//	cout << c << ", " << d << endl;
//
//	return 0;
//}
//
//ostream& operator<<( ostream& os, const Game& game )
//{
//	os << game.GetVal();
//	return os;
//}