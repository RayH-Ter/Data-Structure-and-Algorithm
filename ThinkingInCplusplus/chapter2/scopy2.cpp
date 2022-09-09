// C02:scopy.cpp
// Copy ont file to another, a line at a time

#include <string>
#include <fstream>

using namespace std;

int main()
{
	ifstream in("./scopy.cpp");
	ofstream out("./scopy2.cpp");
	string s;	
	while(getline(in, s)) 		// discard the newline char
		out << s << "\n";	// must add it back
	
	return 0;
} 
