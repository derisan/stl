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

// [����] �ҽ������� �о� vector�� ������ �� �Ųٷ� ȭ�鿡 ����϶�.
int main()
{
	ifstream in{ "Source3.cpp" };

	vector<char> v;
	copy( istream_iterator<char>{in >> noskipws}, istream_iterator<char>{}, back_inserter( v ) );

	copy( v.rbegin(), v.rend(), ostream_iterator<char>{cout} );
}