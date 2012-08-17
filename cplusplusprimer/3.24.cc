#include <iostream>
#include <vector>
#include <bitset>
using namespace std;

int main()
{
	vector<int> ivec;
	bitset<32> bit;
	vector<int>::iterator iter = ivec.begin();
	*iter = 1;
//	*(++iter) = 2;
	cout << *iter << endl;
#if 0	
	for (int i = 2; i != 6; ++i)
		*(iter+i) = *(iter+i-1) + *(iter+i-2);
	
	for (vector<int>::iterator iter2 = ivec.begin(); iter2 != ivec.end(); ++iter2)
		cout << *iter2 << endl;
//		bit.set(*iter2);
#endif	
	cout << "bitset: " << bit << endl;
	return 0;


}	

