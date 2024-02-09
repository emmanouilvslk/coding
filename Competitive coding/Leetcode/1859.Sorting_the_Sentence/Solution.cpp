class Solution {
public:
    string sortSentence(string s) {

    string str,my_s;
	int words = 1;
    int s_length = s.length();


	stringstream ss(s); 

	for (size_t i = 0; i < s_length; i++)
	{
		if(s[i] == ' '){
			words++;
		}
	}
	
    string my_array[words];

	while (getline(ss, str, ' ')) {
		my_array[int(str.back()) - 49] = str.substr(0, str.size()-1);
	}

    for (auto value : my_array)
	{
		my_s.append(value).append(" ");
	}

    return my_s.substr(0, my_s.size()-1);

    }

};