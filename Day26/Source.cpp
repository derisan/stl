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
// 	ifstream in{"단어들.txt"};
// 
// 	unordered_map<string, int> words;
// 
// 	string str;
// 	while(in >> str)
// 	{
// 		words[str]++;
// 	}
// 
// 	cout << "사전에 들어있는 단어의 개수: " << words.size() << endl;
// 
// 
// 	// [문제] 사용자가 입력한 단어를 내 사전에서 찾는다.
// 	// 단어가 없으면 없다고 출력한다.
// 	// 사전에 있는 단어라면 이 단어와 애너그램 관계에 있는 단어를 모두 출력한다.
// 	
// 	while(true)
// 	{
// 		cout << "\n찾을 단어 입력: ";
// 
// 		str.clear();
// 		cin >> str;
// 
// 		if(0 == words[str])
// 		{
// 			cout << str << "은 이 사전에 없습니다." << endl;
// 			continue;
// 		}
// 		
// 		cout << str << "은 이 사전에 있습니다. 사전에 등록된 이 단어의 애너그램을 출력합니다." << endl;
// 
// 		// 모든 애너그림을 알아내기 위해선 str을 정렬할 필요가 있다.
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