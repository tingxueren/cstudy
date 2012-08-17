#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
	stack<string> strstack;
	string word;
	cout << "Enter some words to stack: " << endl;
	while (cin >> word)
		strstack.push(word);
	cout << "Elements of stack: " << endl;
	while (!strstack.empty()) {
		cout << strstack.top() << endl;
		strstack.pop();
	}
	return 0;

}	
