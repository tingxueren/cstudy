#include <iostream>
#include <string>
#include <vector>
using namespace std;

template <typename InIt, typename T>
InIt findelem(InIt first, InIt last, const T& val)
{
	while (first != last) {
		if (*first == val)
			// 找到就直接返回
			return first;
		++first;
	}
	// 到最后还没找到就返回last
	return last;
}	

int main()
{
	int ia[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	string sa[] = {"this", "is", "mary", "test", "example"};
	vector<int> ivec(ia, ia+9);
	vector<string> svec(sa, sa+5);

	vector<int>::iterator iit;
	if ((iit = findelem(ivec.begin(), ivec.end(), 7)) != ivec.end())
		cout << "found this element: " << *iit << endl;
	else
		cout << "no such element." << endl;

	vector<string>::iterator sit;
	if ((sit = findelem(svec.begin(), svec.end(), "mary")) != svec.end())
		cout << "found this element: " << *sit << endl;
	else
		cout << "no such element." << endl;

	return 0;
}	
