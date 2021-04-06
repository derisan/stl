#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <iterator>

using namespace std;

template<typename T>
void listInfo( const vector<T>& v )
{
	cout << "data: " << v.data() << endl;
	cout << "size: " << v.size() << endl;
	cout << "capacity: " << v.capacity() << endl;
}

// [문제] 소스파일을 읽어 vector에 저장한 후 거꾸로 화면에 출력하라.
int main()
{
	ifstream in{ "Source3.cpp" };

	vector<char> v;
	copy( istream_iterator<char>{in >> noskipws}, istream_iterator<char>{}, back_inserter( v ) );

	copy( v.rbegin(), v.rend(), ostream_iterator<char>{cout} );
}