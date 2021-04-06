//#include <iostream>
//#include <vector>
//#include <numeric>
//#include <iterator>
//#include <iomanip>
//
//using namespace std;
//
//// [문제] 숫자를 입력받아 합계와 평균을 출력하라.
//int main()
//{
//	vector<int> v{ istream_iterator<int>{cin}, istream_iterator<int>{} };
//	
//	auto sum = accumulate( v.begin(), v.end(), 0 );
//	auto average = static_cast<double>(sum) / v.size();
//
//	cout << "합계: " << sum << endl;
//	cout << fixed << setprecision(3) << "평균: " << average << endl;
//}