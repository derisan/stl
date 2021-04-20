//#include <iostream>
//#include <fstream>
//#include <list>
//#include <iterator>
//#include <algorithm>
//#include <cctype>
//
//using namespace std;
//
//int main()
//{
//	ifstream in{ "Source.cpp" };
//
//	if (!in)
//	{
//		cout << "CANNOT OPEN FILE!" << endl;
//		exit(EXIT_FAILURE);
//	}
//
//	list<char> code{ istreambuf_iterator<char>{in}, istreambuf_iterator<char>{} };
//	
//	size_t nLowerCase = count_if(code.begin(), code.end(), [](char ch) { return islower(ch); });
//
//	cout << "소문자의 개수: " << nLowerCase << endl;
//}