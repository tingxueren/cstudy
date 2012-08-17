/* 11.21.cc */
#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
	int ia[] = {0, 1, 2, 3, 4, 5, 6, 70, 8, 9};
	list<int> ilst(ia, ia + 10);
	list<int>::reverse_iterator riter;
	riter = find(ilst.rbegin(), ilst.rend(), 0);

	if (riter != ilst.rend())
		cout << "element after the last 0 is "
		     << *(--riter) << endl;
	else
		cout << "no element 0" << endl;
	return 0;

}	
