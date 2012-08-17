#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	const int str_size = 80;
	char *str1, *str2;

	str1 = new char[str_size];
	str2 = new char[str_size];
	if (str1 == NULL || str2 == NULL) {
		cout << "No enough memory!" << endl;
		return -1;
	}
	cout << "Enter two string: " << endl;
	cin >> str1 >> str2;
	int result;
	result = strcmp(str1, str2);
	if (result > 0)
		cout << "\"" << str1 << "\"" << " is bigger then "
		     << "\"" << str2 << "\"" << endl;	
        else if (result < 0)
		cout << "\"" << str2 << "\"" << " is bigger then "
		     << "\"" << str1 << "\"" << endl;
	else
		cout << "There are equal." << endl;
	delete [] str1;
	delete [] str2;

	return 0;
}	
