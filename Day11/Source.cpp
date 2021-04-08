//#include <iostream>
//#include <vector>
//#include <fstream>
//#include <iterator>
//#include <algorithm>
//#include <cctype>
//
//using namespace std;
//
//int main()
//{
//	ifstream in{ "Source.cpp" };
//
//	vector<char> code;
//
//	copy( istream_iterator<char>{in >> noskipws}, istream_iterator<char>{}, back_inserter(code) );
//	
//	transform( code.begin(), code.end(), ostream_iterator<char>{cout}, []( char ch ) {
//		return toupper( ch );
//		} );
//}