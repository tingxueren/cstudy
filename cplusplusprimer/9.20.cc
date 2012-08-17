#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main()
{
	vector<int> ivec;
	list<int> ilis;
	bool result = false;
	int num;
	cout << "Enter numbers for vector: " << endl;
	cin >> num;
	while (num != 65535) {
		ivec.push_back(num);
		cin >> num;
	}
	cout << "Enter numbers for list: " << endl;
	cin >> num;
	while (num != 65535) {
		ilis.push_back(num);
		cin >> num;
	}


	if (ivec.size() != ilis.size()) {
		cout << result << endl;
		return 0;
	}
	else {
		vector<int>::iterator iter1 = ivec.begin();
		list<int>::iterator iter2 = ilis.begin();
		while (*iter1 == *iter2) {
			++iter1;
			++iter2;
		}
		if (iter1 == ivec.end()) {
			result = true;
			cout << result << endl;
			return 0;
		}
		else
			cout << result << endl;
			return 0;

	}

}	
