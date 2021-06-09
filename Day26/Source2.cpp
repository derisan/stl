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
// 	cout << "사전에 들어있는 단어의 개수: " << words.size() << endl;
// 
// 
// 	// [문제] 사용자가 입력한 단어를 내 사전에서 찾는다.
// 	// 단어가 없으면 없다고 출력한다.
// 	// 사전에 있는 단어라면 이 단어와 애너그램 관계에 있는 단어를 모두 출력한다.
// 	// permutation 함수를 이용하는 건 너무 시간이 오래 걸림.
// 	// 적합한 자료구조 고려.
// 	// dichlorodiphenyltrichloroethane
// 
// 	while(true)
// 	{
// 		cout << "\n찾을 단어 입력: ";
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
// 			cout << "사전에 없습니다!" << endl;
// 			continue;
// 		}
// 
// 		cout << orig << "의 애너그램을 찾습니다." << endl;
// 
// 		auto pr = words.equal_range(str);
// 
// 		for(auto iter = pr.first; iter != pr.second; ++iter)
// 		{
// 			cout << iter->second << endl;
// 		}
// 	}
// }