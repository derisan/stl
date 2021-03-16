//#include <iostream>
//#include <functional>
//#include <fstream>
//#include <iterator>
//#include <vector>
//#include <algorithm>
//#include <string>
//
//using namespace std;
//int main()
//{
//	ifstream in( "int 100°³.txt"s, ios::binary );
//
//	if( !in.is_open() )
//	{
//		cout << "FAILED TO OPEN FILE." << endl;
//		return 0;
//	}
//
//	vector<int> nums;
//	nums.reserve( 100 );
//	copy( istream_iterator<int>( in ), istream_iterator<int>(), back_inserter(nums) );
//
//	sort( begin( nums ), end( nums ), greater<>() );
//
//	//int n;
//	//for( int i{}; i < 100; ++i )
//	//	in.read( (char*)&n, sizeof( int ) * 100 );
//
//	for( auto n : nums )
//		cout << n << " ";
//	cout << endl;
//}