#include <iostream>
#include <algorithm>
#include <vector>

#include "String.h"

using namespace std;

// Ŭ���� ������ �ڿ��� �����ϰ� �ִٸ� �̵� ������, �̵� �Ҵ� �����ڸ� �ݵ�� �����Ѵ�.

int main()
{
	vector<String> v;
	v.reserve( 3 );
	v.emplace_back( "�ȳ�" );
	v.emplace_back( "���;�?" );
	v.emplace_back( "�ݰ���" );

	sort( v.begin(), v.end(), []( const String& s1, const String& s2 ) {
		return s1.size() < s2.size();
		} );

	sort( v.begin(), v.end(), []( const String& s1, const String& s2 ) {
		return s1.getString() < s2.getString();
		} );
}