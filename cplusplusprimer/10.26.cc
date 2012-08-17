#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
	multimap<string, string> authors;
	string author, work, searchItem;

	do {
		cout << "Enter author name(ctrl+z to end):" << endl;
		cin >> author;

		if (!cin)
			break;
		cout << "Enter author's works(ctrl+z to end):" << endl;
		while (cin >> work)
			authors.insert(make_pair(author, work));
		cin.clear();
	} while (cin);

	cout << "Who is the author that you want erase:" << endl;
	cin >> searchItem;

	multimap<string, string>::iterator iter = 
		authors.find(searchItem);
	if (iter != authors.end())
		authors.erase(searchItem);
	else
		cout << "Can not find this author!" << endl;

	cout << "author\t\twork:" << endl;
		for (iter = authors.begin(); iter != authors.end(); ++iter)
			cout << iter->first << "\t\t"
			     << iter->second << endl;
	return 0;

}	
