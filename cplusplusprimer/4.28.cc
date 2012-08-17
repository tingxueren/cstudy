#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> ivec;
	int ival;

	cout << "Enter numbers: (Ctrl + Z to end)" << endl;
	while (cin >> ival)
		ivec.push_back(ival);

	int *pia = new int[ivec.size()];

	int *pi = pia;
	for (vector<int>::iterator iter = ivec.begin(); iter != ivec.end();++iter,++pi)
		*pi = *iter;
	pi = pia;
	for (int i = 0; i != int(ivec.size()); ++i, ++pi)
		cout << *pi << endl;
	delete [] pia;
	return 0;
}	
