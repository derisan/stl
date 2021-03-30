#include <iostream>
#include <array>

#include "String.h"

using namespace std;

int main()
{
	array<String, 3> words{ 10, 10, 10 };

	//sort( begin( words ), end( words ), []( const String& w1, const String& w2 ) {
	//	return w1 < w2;
	//	} );

	sort( words.begin(), words.end(), []( const String& w1, const String& w2 ) {
		return w1.getString() < w2.getString();
		} );

	for( const auto& w : words )
		cout << w << " ";
}