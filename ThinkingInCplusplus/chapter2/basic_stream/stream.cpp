// C02:stream.cpp
// More streams features

#include <iostream>
using namespace std;

int main()
{
	cout << "a number in decimal: " << dec << 15 << endl;
	cout << "in octal: " << oct << 15 << endl;
	cout << "in hex: " << hex << 15 << endl;
	cout << "a floating-point number: " << 3.1415926 << endl;
	cout << "non-printing char (escape): " << char(27) << endl; 
	cout << char(27) << endl;
	return 0;
}
