#include <iostream>
#include <stack>
using namespace std;

int main()
{
	const stack<int>::size_type stk_size = 10;
	stack<int> intStack;

	int ix = 0;
	while (intStack.size() != stk_size) 
		intStack.push(ix++);
	int error_cnt = 0;
	while (!intStack.empty()) {
		int value = intStack.top();
		cout << value << " ";
		if (value != --ix) {
			cout << "oops! expected " << ix
			     << " received " << value << endl;
			++error_cnt;
		}
		intStack.pop();
	}
	cout << endl << "our program ran with "
	     << error_cnt << " errors!" << endl;
	return 0;
}	

