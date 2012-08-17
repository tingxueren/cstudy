#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
	stack<char> sexp;
	string exp;

	cout << "Enter a expression:" << endl;
	cin >> exp;//cin读入不能有空格

	string::iterator iter = exp.begin();
	while (iter != exp.end()) {
		if (*iter != ')')
			sexp.push(*iter);
		else {
			while (sexp.top() != '(' && !sexp.empty())
				sexp.pop();
			if (sexp.empty()) // 调试当栈空的时候会有段错误
				cout << "parentheses are not matched" 
				     << endl;
			else {
				sexp.pop();
				sexp.push('@');
			}

		
		}
		++iter;
	}
	while (!sexp.empty()) {
		cout << sexp.top() << endl;
		sexp.pop();
	}
	return 0;
}	

