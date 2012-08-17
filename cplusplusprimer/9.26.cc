#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main()
{
	int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
	vector<int> ivec(ia, ia + 11);
	list<int> ilst(ia, ia + 11);

	for (list<int>::iterator lit = ilst.begin(); //每次重新计算.end
	     lit != ilst.end(); ++lit) {
		if (*lit % 2 != 0) {
			lit = ilst.erase(lit);
			--lit;
		}

	}
	for (list<int>::iterator lit = ilst.begin(); //每次重新计算.end
	     lit != ilst.end(); ++lit) 
		cout << *lit << " ";
	cout << endl;

	for (vector<int>::iterator vit = ivec.begin(); //每次重新计算.end
	    vit != ivec.end(); ++vit) {
		if (*vit % 2 != 0) {
			vit = ivec.erase(vit);
			--vit;
		}

	}
	
	for (vector<int>::iterator vit = ivec.begin(); //每次重新计算.end
	    vit != ivec.end(); ++vit) 
		cout << *vit << " ";
	cout << endl;

	return 0;

}

