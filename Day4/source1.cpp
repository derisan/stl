//// [����] ����ڰ� ���ϴ� ���� num��ŭ int�� ������ ������ Ȯ���Ѵ�.
//// �� ������ 1���� num������ ���� ä���.
//// ó������ �������� �� ���� ����Ѵ�.
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