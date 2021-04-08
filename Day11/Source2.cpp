#include <iostream>
#include <algorithm>
#include <vector>

#include "String.h"

using namespace std;

// 클래스 내에서 자원을 관리하고 있다면 이동 생성자, 이동 할당 연산자를 반드시 구현한다.

int main()
{
	vector<String> v;
	v.reserve( 3 );
	v.emplace_back( "안녕" );
	v.emplace_back( "벡터야?" );
	v.emplace_back( "반가워" );

	sort( v.begin(), v.end(), []( const String& s1, const String& s2 ) {
		return s1.size() < s2.size();
		} );

	sort( v.begin(), v.end(), []( const String& s1, const String& s2 ) {
		return s1.getString() < s2.getString();
		} );
}