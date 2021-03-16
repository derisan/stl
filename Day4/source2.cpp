// core c++ guide - raw pointer를 사용하지 말것

#include <iostream>
#include <memory>
#include <thread>
#include <chrono>

using namespace std;

int main()
{
//	unique_ptr<char[]> p{ new char[10] };

	auto start = chrono::steady_clock::now();
	this_thread::sleep_for( 100ms );
	auto elapsed = chrono::duration_cast<chrono::milliseconds>((chrono::steady_clock::now() - start)).count();

	cout << elapsed << endl;

}