#include <array>
#include <vector>
#include <random>
#include <algorithm>
#include <iostream>
#include <fstream>
#include <iterator>
#include <numeric>

using namespace std;

// (����) ���� 100���� �����ϴµ� ���� �ϵ��ũ�� ����Ʈ ����?
// 1049 B ( ���� �Ӽ����� �˾Ƴ� ���� )
// Why not 400 Byte?
// ����� �˾ƺ� �� �ִ� ���·� �����ϱ� ����.

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

	//ofstream out( "�������������� int 100��.txt"s );
	//copy( begin( arr ), end( arr ), ostream_iterator<int>( out, " " ) );


	// (��ǥ) ���� 100���� 400B ������ �����Ѵ�.
	// ���� "int 100��.txt"�� �����Ѵ�.
	// ���� ũ��� 400B�� �Ǿ�� �Ѵ�.
	//int a[100];
	//iota( begin( a ), end( a ), 1 );
	//ofstream out( "int 100��.txt" );
	//out.write( (char*)a, 100 * sizeof( int ) );


	// 100 ~ 199 ������ ���ڸ� ���Ͽ� �����ϱ�
	vector<int> a( 100 );
	iota( begin( a ), end( a ), 1 );
	ofstream out( "int 100��.txt", ios::binary );
	copy( begin( a ), end( a ), ostream_iterator<int>( out, " " ) );

	// 100 ~199 ������ ���ڰ� ���� �ִ� ���� �о���̱�
	//vector<int> v;
	//v.reserve( 100 );
	//ifstream in( "int 100��.txt" );
	//if( !in.is_open() )
	//{
	//	cout << "Failed to open file" << endl;
	//	return 0;
	//}
	//copy( istream_iterator<int>( in ), istream_iterator<int>(), back_inserter( v ) );
	//for( auto n : v )
	//	cout << n << endl;


	//ifstream in( "�������������� int 100��.txt"s );
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