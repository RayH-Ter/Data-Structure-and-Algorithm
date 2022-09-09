// C02:getWords.cpp
// Break a file into whitespace-separated words

#include <vector>
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	string word;
	vector<string> words;
	ifstream in("./getWords.cpp");
	while(in >> word)
		words.push_back(word);

	for(int i = 0; i < words.size(); i++)
		cout << words[i] << endl;

	return 0;
}
