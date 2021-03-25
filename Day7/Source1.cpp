//#include <iostream>
//#include <random>
//#include <fstream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//mt19937 eng;
//random_device rd;
//uniform_int_distribution<> uid;
//
//int main()
//{
//	eng.seed( rd() );
//
//	//ofstream out{ "정수1000개.txt", ios::binary };
//
//	//vector<int> v( 1000 );
//	//generate( begin( v ), end( v ), []()
//	//	{
//	//		return uid( eng );
//	//	} );
//
//	//out.write( (char*)v.data(), sizeof( int ) * v.size() );
//
//	ifstream in( "정수1000개.txt", ios::binary );
//	if( !in.is_open() )
//		cout << "FAILED to OPEN FILE." << endl;
//
//	vector<int> v( 1000 );
//
//	in.read( (char*)v.data(), sizeof( int ) * v.size() );
//
//	auto maxNum = *max_element( begin( v ), end( v ) );
//
//	cout << "MAXIMUM NUMBER IN VECTOR: " << maxNum << endl;
//
//	sort( begin( v ), end( v ) );
//	sort( begin( v ), end( v ), greater<int>() );
//}