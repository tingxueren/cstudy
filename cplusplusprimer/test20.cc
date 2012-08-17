#include <iostream>
using namespace std;

int main()
{
	int i = 5;
	int *pi;
	pi = &i; // right

	string str("today!");
	string *pstring = &str; // right
//	*pstring = str; // wrong 
//	*pi = i;  // wrong 
//	pi = &i;
//	*pi = *i; // wrong
	cout << str << endl << *pstring << endl\
		<<  pstring << endl << i << endl << *pi << endl;
	return 0;
}	
