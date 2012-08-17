/* 11.20.cc */
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<string> svec;
	string word;
	cout << "Enter some words to vector: " << endl;
	while(cin >> word)
		svec.push_back(word);

	cout << "reverse elements for the vector: " << endl;
	for (vector<string>::iterator iter = (svec.end() - 1);
		iter >= svec.begin(); --iter)
		cout << *iter << " ";
	cout << endl;

	return 0;

}	
