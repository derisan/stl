// #include <iostream>
// #include <algorithm>
// #include <fstream>
// #include <string>
// #include <vector>
// #include <unordered_map>
// 
// using namespace std;
// 
// int main()
// {
// 	ifstream in{"�ܾ��.txt"};
// 
// 	unordered_multimap<string, string> words;
// 
// 	string str;
// 	while(in >> str)
// 	{
// 		string origin = str;
// 		sort(str.begin(), str.end());
// 
// 		words.emplace(str, origin);
// 	}
// 
// 	cout << "������ ����ִ� �ܾ��� ����: " << words.size() << endl;
// 
// 
// 	// [����] ����ڰ� �Է��� �ܾ �� �������� ã�´�.
// 	// �ܾ ������ ���ٰ� ����Ѵ�.
// 	// ������ �ִ� �ܾ��� �� �ܾ�� �ֳʱ׷� ���迡 �ִ� �ܾ ��� ����Ѵ�.
// 	// permutation �Լ��� �̿��ϴ� �� �ʹ� �ð��� ���� �ɸ�.
// 	// ������ �ڷᱸ�� ���.
// 	// dichlorodiphenyltrichloroethane
// 
// 	while(true)
// 	{
// 		cout << "\nã�� �ܾ� �Է�: ";
// 
// 		str.clear();
// 		cin >> str;
// 
// 		string orig = str;
// 
// 		sort(str.begin(), str.end());
// 			
// 		if(0 == words.count(str))
// 		{
// 			cout << "������ �����ϴ�!" << endl;
// 			continue;
// 		}
// 
// 		cout << orig << "�� �ֳʱ׷��� ã���ϴ�." << endl;
// 
// 		auto pr = words.equal_range(str);
// 
// 		for(auto iter = pr.first; iter != pr.second; ++iter)
// 		{
// 			cout << iter->second << endl;
// 		}
// 	}
// }