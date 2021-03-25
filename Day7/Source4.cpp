//#include <iostream>			// 표준 스트림
//#include <algorithm>		// sort()
//#include <vector>			// vector 컨테이너
//#include <string>
//#include <iterator>
//#include <fstream>
//
//using namespace std;
//
//int main()
//{
//	// [문제] 사용자가 입력하는 단어를 저장한 후
//	// 오름차순으로 정렬하여 출력하라.
//
//	ifstream in{ "Source4.cpp" };
//
//	vector<string> words{ istream_iterator<string>{ in }, istream_iterator<string>{} };
//	sort( begin( words ), end( words ) );
//	copy( begin( words ), end( words ), ostream_iterator<string>( cout, "\n" ) );
//}