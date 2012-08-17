#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s("hello world");
	string s2 = s.substr(6, 5);
	cout << s << endl;
	cout << s2 << endl;

	return 0;
}	
