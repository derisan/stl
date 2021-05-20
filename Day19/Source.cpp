//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <iterator>
//
//#include "String.h"
//
//
//using namespace std;
//
//template<class InIter, class OutIter>
//void my_copy(InIter first, InIter last, OutIter dest)
//{
//	while(first != last)
//	{
//		*dest++ = *first++;
//	}
//}
//
//
//int main()
//{
//	vector<int> v{1,2,3,4,5};
//	vector<int> copied;
//	vector<int> copied_t;
//	copied_t.reserve(5);
//
//	my_copy(v.begin(), v.end(), ostream_iterator<int>{cout, " "});
//	cout << endl;
//
//	my_copy(v.begin(), v.end(), back_inserter(copied));
//	for(auto n : copied)
//		cout << n << " ";
//	cout << endl;
//	
//
//	/* copied_t.end() 위치가 변하지 않음... */
//	my_copy(v.begin(), v.end(), copied_t.begin());
//	for(auto n : copied_t)
//		cout << n << " ";
//	cout << endl;
//
//	cout << *copied_t.end() << endl;
//}