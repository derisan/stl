#include <iostream>			// ǥ�� ��Ʈ��
#include <algorithm>		// sort()
#include <vector>			// vector �����̳�

#include "String.h"

using namespace std;

int main()
{
	engine.seed( rd() );

	// String ��ü 100���� [1~200]������ ���������� �����϶�.
	// ���� ������������ �����ϰ� �� ��ü�� ���ĺ� ������������ �����϶�.
	vector<String> strs( 100 );

	for( auto& str : strs )
		str.Sort();

	sort( begin( strs ), end( strs ), []( const String& s1, const String& s2 ) {
		return s1.GetSize() > s2.GetSize();
		} );

	for( const auto& str : strs )
		cout << str << endl;
}