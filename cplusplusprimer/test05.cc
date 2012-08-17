#include <iostream>
using namespace std;

int main()
{
	string line;
	while (getline(cin, line))
		cout << line << " len is " << line.size() << endl;
	return 0;
}	
