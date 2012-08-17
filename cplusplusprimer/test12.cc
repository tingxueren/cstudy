#include <iostream>
using namespace std;

int main()
{
	int *ip = 0;
//	char *pc = reinterpret_cast<char*>(ip);
	char *pc = static_cast<char*>(ip);
	cout << *ip << *pc << endl;
	return 0;

}	
