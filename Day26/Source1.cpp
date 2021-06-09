//  #include <iostream>
 //  #include <algorithm>
 //  #include <fstream>
 //  #include <string>
 //  #include <vector>
 //  #include <unordered_map>
 //  
 //  using namespace std;
 // 
 // 
 //  // 길이가 긴 단어의 permutation을 찾는 건 너무 오래 걸림...
 //  
 //  int main()
 //  {
 //  	ifstream in{"단어들.txt"};
 //  
 //  	vector<string> words;
 //  
 //  	string str;
 //  	while(in >> str)
 //  	{
 //  		words.push_back(std::move(str));
 //  	}
 //  
 //  	cout << "사전에 들어있는 단어의 개수: " << words.size() << endl;
 //  
 //  	// [문제]길이가 긴 순서대로 10개 단어를 출력하라.
 //  	partial_sort(words.begin(), words.begin() + 10, words.end(), [](const string& s1, const string& s2) {
 //  		return s1.size() > s2.size();
 //  				 });
 //  
 //  
 //  	int cnt{0};
 //  	for(const auto& w : words)
 //  	{
 //  		if(cnt == 10)
 //  		{
 //  			break;
 //  		}
 //  
 //  		cout << w << endl;
 //  		
 //  		cnt++;
 //  	}
 //  
 //  
 //  	while(true)
 //  	{
 //  		str.clear();
 //  
 //  		cout << "찾을 단어를 입력하세요: ";
 //  		cin >> str;
 //  
 //  		if(binary_search(words.begin(), words.end(), str))
 //  		{
 //  			cout << "있다" << endl;
 //  		}
 //  		else
 //  		{
 //  			cout << "없다" << endl;
 //  			continue;
 //  		}
 //  
 //  		sort(str.begin(), str.end());
 //  
 //  		do 
 //  		{
 //  			if(binary_search(words.begin(), words.end(), str))
 //  			{
 //  				cout << str << " ";
 //  			}
 //  		} while (next_permutation(str.begin(), str.end()));
 //  		cout << endl;
 //  	}
 //  }