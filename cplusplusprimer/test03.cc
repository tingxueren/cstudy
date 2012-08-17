#include <iostream>
using namespace std;

int main()
{
	int base, exponent, sum = 1;
	cout << "please enter base:" << endl;
	cin >> base;
	cout << "please enter exponent:" << endl;
	cin >> exponent;
	for (int i = 0; i < exponent; ++i)
		sum *= base;
	cout << base << " power of " << exponent << " is " << sum << endl;
	return 0;
	
}	
