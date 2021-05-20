#include <iostream>
#include <chrono>
#include <set>
#include <unordered_set>
#include <vector>
#include <array>
#include <algorithm>

#include "../String.h"

using namespace std;

// �����̳ʿ� ������ ���� ����
// Ư�� ���� ã�µ� �ɸ��� �ð� ����

// set, map -> equivalence
// unordered... -> equality


constexpr int DATA_COUNTS = 1'0000;
constexpr int TARGET_COUNTS = 1000;

extern default_random_engine dre;
uniform_int_distribution<int> uid(0, DATA_COUNTS - 1);

int main()
{
	vector<String> data;
	data.reserve(DATA_COUNTS);

	for(int i = 0; i < DATA_COUNTS; ++i)
	{
		data.emplace_back(i+1);
	}
	
	array<String, TARGET_COUNTS> targets;

	for(int i = 0; i < targets.size(); ++i)
	{
		targets[i] = data[uid(dre)];
	}


	auto start = chrono::system_clock::now();
	for(int i = 0; i < targets.size(); ++i)
	{
		auto iter = find(data.begin(), data.end(), targets[i]);
	}
	auto elapsed = chrono::system_clock::now() - start;
	cout << "�����͸� ã�µ� �ɸ� ��� �ð�: " << chrono::duration_cast<chrono::milliseconds>(elapsed).count() << "ms" << endl;


	cout << endl << endl;

	set<String> dataset{data.begin(), data.end()};

	start = chrono::system_clock::now();
	for(int i = 0; i < targets.size(); ++i)
	{
		dataset.find(targets[i]);
	}
	elapsed = chrono::system_clock::now() - start;
	cout << "�����͸� ã�µ� �ɸ� ��� �ð�: " << chrono::duration_cast<chrono::milliseconds>(elapsed).count() << "ms" << endl;
}