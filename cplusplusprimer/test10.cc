#include <iostream>
using namespace std;

int main()
{
	int i = 42, j = 1024;
	int *p1 = &i, *p2 = &j;
	*p2= *p1 * *p2;
	*p1 *= *p1;
	cout << i << endl << j << endl;
	cout << *p1 << endl << *p2 << endl;
	cout << p1 << endl << p2 << endl;
	return 0;
}	
