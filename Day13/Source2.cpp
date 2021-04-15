//#include <iostream>
//#include <vector>
//#include <span>
//
//using namespace std;
//
///**
//* Since C++20, contiguous한 컨테이너를 나타내는 span 템플릿 클래스가 추가되었다.
//*/
//
//template<typename T>
//void Print(span<T> s)
//{
//	for (int i = 0; i < s.size(); ++i)
//		cout << s[i] << " ";
//	cout << endl;
//}
//
//int main()
//{
//	//vector<int> v{ 1,2,3,4,5 };
//	string s{ "Hello, world!" };
//
//	Print(span{s});
//}