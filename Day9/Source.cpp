#include <iostream>

#include "String.h"

using namespace std;

String s{ 20 };  // String �ν��Ͻ� s�� ��ġ�� �ڵ� ���׸�Ʈ, ��ü ������ p�� ��ġ�� ��.

int main()
{
	String s{ 20 }; // String �ν��Ͻ� s�� ��ġ�� ����, ��ü ������ p�� ��ġ�� ��.
	new String{ 20 };  // String �ν��Ͻ� s�� ��ġ�� ��, ��ü ������ p�� ��ġ�� ��.
}