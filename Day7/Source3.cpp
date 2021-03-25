#include <iostream>			// 표준 스트림
#include <algorithm>		// sort()
#include <vector>			// vector 컨테이너

#include "String.h"

using namespace std;

int main()
{
	engine.seed( rd() );

	// String 객체 100개를 [1~200]까지의 랜덤값으로 생성하라.
	// 길이 오름차순으로 정렬하고 각 객체는 알파벳 오름차순으로 생성하라.
	vector<String> strs( 100 );

	for( auto& str : strs )
		str.Sort();

	sort( begin( strs ), end( strs ), []( const String& s1, const String& s2 ) {
		return s1.GetSize() > s2.GetSize();
		} );

	for( const auto& str : strs )
		cout << str << endl;
}