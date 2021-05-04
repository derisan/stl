#include <iostream>
#include <vector>
#include <forward_list>
#include <list>
#include <algorithm>
#include <iterator>

#include "../String.h"

using namespace std;


/**
* �ݺ��ڴ� Design Pattern �� �ϳ�. Iterator Pattern.
* 
*/


// [����] �ݺ��ڸ� ���ڷ� ���� �Լ��� �װ��� �������� ��� �˱�?

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