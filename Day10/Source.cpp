//#include <iostream>
//#include <vector>
//#include <numeric>
//#include <iterator>
//#include <iomanip>
//
//using namespace std;
//
//// [����] ���ڸ� �Է¹޾� �հ�� ����� ����϶�.
//int main()
//{
//	vector<int> v{ istream_iterator<int>{cin}, istream_iterator<int>{} };
//	
//	auto sum = accumulate( v.begin(), v.end(), 0 );
//	auto average = static_cast<double>(sum) / v.size();
//
//	cout << "�հ�: " << sum << endl;
//	cout << fixed << setprecision(3) << "���: " << average << endl;
//}