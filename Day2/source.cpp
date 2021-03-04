//// STL DAY-2 
//// Build settings : x86, Release
//
//#include "../save.h"
//
//// [문제] main()을 변경하지 않고 실행되도록 하자.
//// 앞에서 만든 change()가 다른 자료형도 바꿀 수 있도록 하자. (template)
//// Game은 사용자 정의 자료형
//
//// Reference & Pointer : 한 지역에서 다른 지역의 객체에 access 하기 위해 사용
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