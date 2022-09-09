// C02:fillString.cpp
// Read an entire file into a single string

#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	string s, line;
	ifstream in("./fillString.cpp");
	while(getline(in, line))
		s += line + "\n";
	cout << s;

	return 0;
}
