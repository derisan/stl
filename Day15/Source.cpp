#include <iostream>
#include <vector>
#include <forward_list>
#include <list>
#include <algorithm>
#include <iterator>

#include "../String.h"

using namespace std;


/**
* 반복자는 Design Pattern 중 하나. Iterator Pattern.
* 
*/


// [문제] 반복자를 인자로 받은 함수는 그것이 무엇인지 어떻게 알까?

template<typename Iter>
void ShowIteratorCategory(Iter it)
{
	cout << typeid(iterator_traits<Iter>::iterator_category).name() << endl;
}


int main()
{
	//ShowIteratorCategory(istream_iterator<char>{});
	//ShowIteratorCategory(ostream_iterator<char>{cout});
	//ShowIteratorCategory(forward_list<int>{}.begin());
	//ShowIteratorCategory(list<int>{}.begin());
	//ShowIteratorCategory(vector<int>{}.begin());
	
	String s{ "13254690" };

	sort(s.begin(), s.end());

	//for (char ch : s)
	//	cout << ch << " ";
	//cout << endl;
	

}