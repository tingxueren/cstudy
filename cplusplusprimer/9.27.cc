#include <iostream>
#include <string>
#include <list>
using namespace std;

int main()
{
	list<string> lstr;
	string str, end("stop");
	cout << "Enter some strings (stop to end): " << endl;
	cin >> str;
	while (str != end) {
		lstr.push_back(str);
		cin >> str;
	}	
	cout << "Enter a string that you want to search: " << endl;
	cin >> str;

	for (list<string>::iterator iter = lstr.begin();
	     iter != lstr.end(); ++iter) {
		if (*iter == str) {
			iter = lstr.erase(iter);
			--iter;
		}

	}
	for (list<string>::iterator iter = lstr.begin();
	     iter != lstr.end(); ++iter) 
		cout << *iter << " ";
	cout << endl;
	return 0;

}	

