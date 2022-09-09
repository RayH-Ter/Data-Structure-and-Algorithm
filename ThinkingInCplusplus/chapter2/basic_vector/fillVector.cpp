// C02:fillVector.cpp
// Copy an entire file into a vector of string

#include <vector>
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	string line;
	vector<string> v;
	ifstream in("./fillVector.cpp");
	while(getline(in, line))
		v.push_back(line);
	
	for(int i = 0; i < v.size(); i++)
		cout << i << ": " <<  v[i] << endl;

	return 0;
}
