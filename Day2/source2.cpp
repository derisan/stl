#include <iostream>
#include <random>
#include <array>
#include <limits>
#include <algorithm>

// [문제] int 10개를 저장할 공간을 마련한다.
// 배열을 랜덤 엔진과 분포를 이용해서 임의의 값으로 만들자.

// 랜덤 엔진은 약 5,000 바이트. 스택에 상주시키기 부담스럽다. 전역 변수로 설정.
std::mt19937 engine;

int main()
{
	std::random_device rd;
	engine.seed( rd() );

	std::uniform_int_distribution uid{ 1, 1000 };
	// magic number 피하기!!!
	const int kLen = 10;
	std::array<int, kLen> arr{ 0 };

	for( auto& n : arr )
		n = uid( engine );

	std::sort( arr.begin(), arr.end(), []( int a, int b ) {
		return a > b;
		});

	for( auto n : arr )
		std::cout << n << std::endl;

	
	//std::cout << std::numeric_limits<int>::max() << std::endl;

	return 0;
}