#include <iostream>
#include <cctype>
#include <clocale>
#include <cstring>
#include <string>
#include <bits/stdc++.h>  


using namespace std;


int main(){

	string s = "is2 sentence4 This1 a3";
	string str;
	int words = 0;

	stringstream ss(s); 


	int s_length = s.length();

	cout << s_length << endl;

	for (size_t i = 0; i < s_length; i++)
	{
		if(s[i] == ' '){
			words++;
		}
	}
	
    cout << "Words in sentence: "<< words << endl;
	string my_array[words+1];
	string my_s;

	while (getline(ss, str, ' ')) {
		my_array[int(str.back()) - 49] = str.substr(0, str.size()-1);
	}

	for (auto value : my_array)
	{
		my_s.append(value).append(" ");
	}
	
	cout << my_s.substr(0, my_s.size()-1);

    return 0;
}