#include <iostream>

#include "String.h"

using namespace std;

String s{ 20 };  // String 인스턴스 s의 위치는 코드 세그먼트, 객체 내부의 p의 위치는 힙.

int main()
{
	String s{ 20 }; // String 인스턴스 s의 위치는 스택, 객체 내부의 p의 위치는 힙.
	new String{ 20 };  // String 인스턴스 s의 위치는 힙, 객체 내부의 p의 위치는 힙.
}