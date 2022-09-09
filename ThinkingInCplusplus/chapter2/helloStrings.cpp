// C02:helloStrings.cpp
// The basics of the Standard C++ string class

#include <string>
#include <iostream>

using namespace std;

int main()
{
	string s1, s2;
	string s3 = "Hellom World.";
	string s4("I am");
	s2 = "Today";
	s1 = s3 + " " + s4;
	s1 = s1 +  " 8 "; 		// equivalent to s1 += " 8 ";
	cout << s1 + s2 + "!" << endl;
	return 0;
}

