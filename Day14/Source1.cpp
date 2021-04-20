//#include <iostream>
//#include <fstream>
//#include <iterator>
//#include <list>
//#include <algorithm>
//#include <sstream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	ifstream in{ "Source1.cpp" };
//
//	if (!in)
//	{
//		cout << "CANNOT OPEN FILE!" << endl;
//		exit(EXIT_FAILURE);
//	}
//
//	list<string> code{ istream_iterator<string>{in}, istream_iterator<string>{} };
//	auto iter = find(code.begin(), code.end(), "using"s);
//
//	if (iter != code.end())
//	{
//		cout << distance(code.begin(), iter) << endl;
//	}
//	else
//	{
//		cout << "Cannot find \"using\"" << endl;
//	}
//}