#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
	map<string, int> wordCont;
	string word;

	cout << "Enter some words:" << endl;
	while (cin >> word)
		++wordCont[word];

	cout << "word\t\t" << "time" << endl;
	for (map<string, int>::iterator iter = wordCont.begin();
	     iter != wordCont.end(); ++iter)
		cout << (*iter).first << "\t\t" 
		     << (*iter).second << endl;
	return 0;
}	
