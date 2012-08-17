#include <iostream>
#include <list>
#include <deque>
using namespace std;

int main()
{
	list<int> lint;
	deque<int> deqi01, deqi02;
	int num;
	cout << "Enter elements for list: " << endl;
	while (cin >> num)
		lint.push_back(num);
	for (list<int>::iterator iter = lint.begin();
		iter != lint.end(); ++iter) {
		if (*iter % 2 == 0)
			deqi01.push_back(*iter);
		else
			deqi02.push_back(*iter);
	}
	cout << "The list: " << endl;
	for (list<int>::iterator iter = lint.begin();
		iter != lint.end(); ++iter) 
		cout << *iter << " ";
	cout << endl << "deque01:" << endl;
	for (deque<int>::iterator iter = deqi01.begin();
		iter != deqi01.end(); ++iter) 
		cout << *iter << " ";
	cout << endl << "deque02:" << endl;
	for (deque<int>::iterator iter = deqi02.begin();
		iter != deqi02.end(); ++iter) 
		cout << *iter << " ";
	cout << endl;

	return 0;
}
