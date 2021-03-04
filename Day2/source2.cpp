#include <iostream>
#include <random>
#include <array>
#include <limits>
#include <algorithm>

// [����] int 10���� ������ ������ �����Ѵ�.
// �迭�� ���� ������ ������ �̿��ؼ� ������ ������ ������.

// ���� ������ �� 5,000 ����Ʈ. ���ÿ� ���ֽ�Ű�� �δ㽺����. ���� ������ ����.
std::mt19937 engine;

int main()
{
	std::random_device rd;
	engine.seed( rd() );

	std::uniform_int_distribution uid{ 1, 1000 };
	// magic number ���ϱ�!!!
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