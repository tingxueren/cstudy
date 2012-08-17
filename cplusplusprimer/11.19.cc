/* 11.19.cc */
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
	for (vector<string>::reverse_iterator r_iter = svec.rbegin();
		r_iter != svec.rend(); ++r_iter)
		cout << *r_iter << " ";
	cout << endl;

	return 0;

}	
