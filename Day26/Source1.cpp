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
 //  // ���̰� �� �ܾ��� permutation�� ã�� �� �ʹ� ���� �ɸ�...
 //  
 //  int main()
 //  {
 //  	ifstream in{"�ܾ��.txt"};
 //  
 //  	vector<string> words;
 //  
 //  	string str;
 //  	while(in >> str)
 //  	{
 //  		words.push_back(std::move(str));
 //  	}
 //  
 //  	cout << "������ ����ִ� �ܾ��� ����: " << words.size() << endl;
 //  
 //  	// [����]���̰� �� ������� 10�� �ܾ ����϶�.
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
 //  		cout << "ã�� �ܾ �Է��ϼ���: ";
 //  		cin >> str;
 //  
 //  		if(binary_search(words.begin(), words.end(), str))
 //  		{
 //  			cout << "�ִ�" << endl;
 //  		}
 //  		else
 //  		{
 //  			cout << "����" << endl;
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