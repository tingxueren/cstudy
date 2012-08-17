#include <iostream>
#include <bitset>
using namespace std;

int main()
{
	int x = 0, y = 1, z;
	bitset<32> bit;
	z = x + y;
	while (z <= 21) {
	bit.set(z);
	x = y;
	y = z;
	z = x + y;
	}
	cout << bit << endl;
	return 0;
}	
