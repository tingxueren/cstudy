#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> ivec;
	int vi, minvai, count = 0;
	cout << "Enter the items of vector: " << endl;
	while (cin >> vi)
		ivec.push_back(vi);
	for (vector<int>::iterator iter = ivec.begin(); iter != ivec.end();
	     ++iter)
		cout << *iter << '\t';
	cout << endl;
	minvai = ivec[0];
	for (vector<int>::iterator iter = ivec.begin(); iter != ivec.end();
	     ++iter) {
		if (minvai < *iter)
			; // null statement
		else if (minvai == *iter)
			++count;
		else {
			minvai = *iter;
			count = 1;	       	
		}
	}
	cout << "min element is: " << minvai << " the count is: " << count
	     << endl;
	
	return 0;	
}	
