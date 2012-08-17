#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	const char ca[] = {'c','+','+'};
	const char *cp = ca;
	while (*cp) {
		cout << *cp << endl;
		++cp;
	}
	return 0;
}	
