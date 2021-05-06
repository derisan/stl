//#include <iostream>
//#include <vector>
//#include <deque>
//
//using namespace std;
//
//
//template<typename Iter>
//void f(Iter iter)
//{
//	// contiguous_iterator<T> returns bool.
//	if(contiguous_iterator<Iter>)
//	{
//		cout << "Its contiguous" << endl;
//	}
//	else
//	{
//		cout << "It's not contiguous." << endl;
//	}
//}
//
//int main()
//{
//	cout << typeid(deque<int>::iterator::iterator_category).name() << endl;
//	cout << typeid(vector<int>::iterator::iterator_concept).name() << endl;
//
//	f(deque<int>::iterator());
//	f(vector<int>::iterator());
//}