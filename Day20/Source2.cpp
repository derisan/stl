#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main()
{
	map<string, vector<string>> foods;

	foods["�ѽ�"] = {"��ġ", "��ħ��"};

	foods.emplace(piecewise_construct, make_tuple("�߽�"), make_tuple());


	//while(true)
	//{
	//	cout << "\n�̸� �Է�: ";
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