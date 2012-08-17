#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class GT_cls {
public:
	GT_cls(int val = 0): bound(val) {}
	bool operator() (const int &ival)
	{
		return ival > bound;
	}	
private:
	int bound;

};

int main()
{
	vector<int> ivec;
	int ival;
	cout << "Enter numbers(ctrl+z to end): " << endl;
	while(cin >> ival)
		ivec.push_back(ival);
	cin.clear();
	
	int spval;
	cout << "Enter a specified value: " << endl;
	cin >> spval;

	vector<int>::iterator iter;
	iter = find_if(ivec.begin(), ivec.end(), GT_cls(spval));

	if (iter != ivec.end())
		cout << "The first element that is larger than "
		     << spval << " : " << *iter << endl;
	else 
		cout << "No element that is larger than "
		     << spval << endl;

	return 0;

}	
