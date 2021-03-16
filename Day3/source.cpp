#include <array>
#include <vector>
#include <random>
#include <algorithm>
#include <iostream>
#include <fstream>
#include <iterator>
#include <numeric>

using namespace std;

// (문제) 정수 100개를 저장하는데 사용된 하드디스크의 바이트 수는?
// 1049 B ( 파일 속성에서 알아낸 정보 )
// Why not 400 Byte?
// 사람이 알아볼 수 있는 형태로 가공하기 때문.

int main()
{
	//// Store 100 random numbers to file.
	//mt19937 engine;
	//random_device rd;
	//engine.seed( rd() );

	//uniform_int_distribution<int> uid;

	//array<int, 100> arr;
	//generate( begin( arr ), end( arr ), [&uid, &engine]() {
	//	return uid( engine );
	//	} );

	//sort( begin( arr ), end( arr ) );

	//ofstream out( "오름차순정렬한 int 100개.txt"s );
	//copy( begin( arr ), end( arr ), ostream_iterator<int>( out, " " ) );


	// (목표) 정수 100개를 400B 공간에 저장한다.
	// 파일 "int 100개.txt"에 저장한다.
	// 파일 크기는 400B가 되어야 한다.
	//int a[100];
	//iota( begin( a ), end( a ), 1 );
	//ofstream out( "int 100개.txt" );
	//out.write( (char*)a, 100 * sizeof( int ) );


	// 100 ~ 199 까지의 숫자를 파일에 저장하기
	vector<int> a( 100 );
	iota( begin( a ), end( a ), 1 );
	ofstream out( "int 100개.txt", ios::binary );
	copy( begin( a ), end( a ), ostream_iterator<int>( out, " " ) );

	// 100 ~199 까지의 숫자가 써져 있는 파일 읽어들이기
	//vector<int> v;
	//v.reserve( 100 );
	//ifstream in( "int 100개.txt" );
	//if( !in.is_open() )
	//{
	//	cout << "Failed to open file" << endl;
	//	return 0;
	//}
	//copy( istream_iterator<int>( in ), istream_iterator<int>(), back_inserter( v ) );
	//for( auto n : v )
	//	cout << n << endl;


	//ifstream in( "오름차순정렬한 int 100개.txt"s );
	//if( !in.is_open() )
	//{
	//	cout << "Invalid file name!" << endl;
	//	return 0;
	//}

	//vector<int> v;
	//v.reserve( 100 );
	//copy( istream_iterator<int>( in ), istream_iterator<int>(), back_inserter( v ) );

	//for( auto n : v )
	//	cout << n << endl;
}