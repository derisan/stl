//// [문제] 사용자가 원하는 갯수 num만큼 int를 저장할 공간을 확보한다.
//// 이 공간을 1부터 num까지의 수로 채운다.
//// 처음값과 마지막값 두 수를 출력한다.
//
//
//#include <iostream>
//#include <vector> 
//#include <numeric> // iota
//
//using namespace std;
//
//int main()
//{
//	while( true )
//	{
//		cout << "Enter a number:\n";
//
//		int n;
//		if( (cin >> n).eof() )
//		{
//			cin.clear();
//			break;
//		}
//	
//		vector<int> nums( n );
//
//		iota( begin( nums ), end( nums ), 1 );
//
//		cout << nums.front() << ", " << nums.back() << endl;
//	}
//}