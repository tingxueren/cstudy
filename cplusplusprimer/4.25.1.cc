#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1, str2;
	cout << "Enter two string: " << endl;
	cin >> str1 >> str2;
	
	if (str1 > str2)
		cout << "\"" << str1 << "\"" << " is bigger then "
		     << "\"" << str2 << "\"" << endl;	
        else if (str1 < str2)
		cout << "\"" << str2 << "\"" << " is bigger then "
		     << "\"" << str1 << "\"" << endl;
	else
		cout << "There are equal." << endl;
	return 0;
}	

