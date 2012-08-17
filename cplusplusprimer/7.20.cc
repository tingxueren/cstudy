#include <iostream>
using namespace std;

int main()
{
	int a, i, result = 1;
	cout << "Enter the number: " << endl;
	cin >> a;
	if (a != 0) {
		for (i = 1; i <= a; ++i)
			result *= i; 
		
	}
	
	cout << a << "!" << " is " << result << endl;
	return 0;


}	
