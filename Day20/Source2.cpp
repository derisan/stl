#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main()
{
	map<string, vector<string>> foods;

	foods["한식"] = {"김치", "부침개"};

	foods.emplace(piecewise_construct, make_tuple("중식"), make_tuple());


	//while(true)
	//{
	//	cout << "\n이름 입력: ";
	//	
	//	string group;
	//	getline(cin, group);

	//	auto iter = foods.find(group);

	//	if(iter != foods.end())
	//	{
	//		auto f = iter->second;

	//		for(const auto& food : f)
	//			cout << food << endl;
	//	}
	//	else
	//	{
	//		cout << "There is no [" << group << "] category." << endl;
	//	}
	//}
}