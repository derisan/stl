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
// 	unordered_map<string, int> words;
// 
// 	string str;
// 	while(in >> str)
// 	{
// 		words[str]++;
// 	}
// 
// 	cout << "������ ����ִ� �ܾ��� ����: " << words.size() << endl;
// 
// 
// 	// [����] ����ڰ� �Է��� �ܾ �� �������� ã�´�.
// 	// �ܾ ������ ���ٰ� ����Ѵ�.
// 	// ������ �ִ� �ܾ��� �� �ܾ�� �ֳʱ׷� ���迡 �ִ� �ܾ ��� ����Ѵ�.
// 	
// 	while(true)
// 	{
// 		cout << "\nã�� �ܾ� �Է�: ";
// 
// 		str.clear();
// 		cin >> str;
// 
// 		if(0 == words[str])
// 		{
// 			cout << str << "�� �� ������ �����ϴ�." << endl;
// 			continue;
// 		}
// 		
// 		cout << str << "�� �� ������ �ֽ��ϴ�. ������ ��ϵ� �� �ܾ��� �ֳʱ׷��� ����մϴ�." << endl;
// 
// 		// ��� �ֳʱ׸��� �˾Ƴ��� ���ؼ� str�� ������ �ʿ䰡 �ִ�.
// 		sort(str.begin(), str.end());
// 
// 		while(next_permutation(str.begin(), str.end()))
// 		{
// 			int res = words[str];
// 
// 			switch(res)
// 			{
// 				case 0:
// 					break;
// 
// 				case 1:
// 					cout << str << endl;
// 					break;
// 
// 				default:
// 					break;
// 			}
// 		}
// 	}
// }