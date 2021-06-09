// #include <iostream>
// #include <vector>
// #include <fstream>
// #include <string>
// #include <algorithm>
// 
// using namespace std;
// 
// using String = pair<string, string>;
// 
// int main()
// {
// 	ifstream in{"단어들.txt"};
// 
// 	vector<String> words;
// 	words.reserve(369882);
// 
// 	string str;
// 	while(in >> str)
// 	{
// 		string orig = str;
// 
// 		sort(str.begin(), str.end());
// 
// 		words.emplace_back(str, orig);
// 	}
// 
// 	sort(words.begin(), words.end(), [](const String& a, const String& b) {
// 		return a.first < b.first;
// 		 });
// 
// // 	auto bi = words.begin();
// // 
// // 	int cnt{0};
// // 	for(const auto& w : words)
// // 	{
// // 		auto pr = equal_range(bi, words.end(), w,
// // 							  [](const String& a, const String& b) {
// // 								  return a.first < b.first;
// // 							  });
// // 
// // 
// // 		if(distance(pr.first, pr.second) > 1)
// // 		{
// // 			for(auto it = pr.first; it != pr.second; ++it)
// // 			{
// // 				//cout << it->first << ", " << it->second << endl;
// // 				cnt++;
// // 			}
// // 			bi = pr.second;
// // 		}
// // 	}
// 
// 	auto bi = words.begin();
// 	int cnt{0};
// 	while(true)
// 	{
// 		if(bi == words.end())
// 		{
// 			break;
// 		}
// 
// 		auto pr = equal_range(bi, words.end(), *bi,
// 							  [](const String& a, const String& b) {
// 								  return a.first < b.first;
// 							  });
// 
// 
// 		if(distance(pr.first, pr.second) > 1)
// 		{
// 			for(auto it = pr.first; it != pr.second; ++it)
// 			{
// 				//cout << it->first << ", " << it->second << endl;
// 				cnt++;
// 			}
// 			bi = pr.second;
// 		}
// 		else
// 		{
// 			++bi;
// 		}
// 	}
// 
// 	cout << "애너그램 총 개수: " << cnt << endl;
// }