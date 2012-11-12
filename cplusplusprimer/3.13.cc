#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> ivec;
	int num;
	while (cin >> num)
		ivec.push_back(num);
//注释过的部分运行时会有段错误,原因大概是访问溢出	
//对vector的访问最好通过iterator进行不要通过下标,下标不靠谱 	
#if 0	
	n = ivec.size();
	if (n % 2 == 1) {
		for (vector<int>::size_type ix = 0; ix != (n-1); ix+=2)
			cout << "ivec[" << ix << "]" << " + " << "ivec[" << ix+1 << "]" << " = " << ivec[ix] + ivec[ix+1] <<endl;
		cout << "The last num is:" << ivec[n-1] << endl;
	}
	else {
		for (vector<int>::size_type ix = 0; ix != (n-1); ix+=2)
			cout << "ivec[" << ix << "]" << " + " << "ivec[" << ix+1 << "]" << " = " << ivec[ix] + ivec[ix+1] <<endl;
	
	}
#endif
	cout << " Sum of eace pair of adjacent elements: " << endl;
	for (vector<int>::iterator iter = ivec.begin();
			iter < ivec.end() - 1;
			iter = iter + 2) {
		cout << *iter + *(iter + 1) << endl;
	}
	if ( ivec.size() % 2 != 0)
		cout << endl
		     << "The last element is not been summed "
		     << "and its value is "
		     << *(ivec.end()-1) << endl;

	cout << " Sum of each pair of begin and end elements: " << endl;

	cout << "ivec.size() = " << ivec.size() << endl;
	// ivec.end() 指向末端元素的下一个。
	// iter1 < iter2 不能改成iter1 != iter2 ,必须严格的
	// iter1 在 iter2 前面，不然会死循环，段错误
	vector<int>::iterator iter1, iter2;
	for (iter1 = ivec.begin(), iter2 = ivec.end() - 1;
			iter1 < iter2;) {
		cout << "*iter1 = " << *iter1 << "; *iter2 = " << *iter2 << endl;
		cout << *iter1 + *iter2 << endl;
		iter1 = iter1 + 1;
		iter2 = iter2 - 1;
	}
	if (iter1 == iter2) {
		cout << "The last element is :" << *iter1 << endl;
	}
	return 0;
}	
