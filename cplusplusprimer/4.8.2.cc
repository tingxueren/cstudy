#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> ivec1, ivec2;
	int num;
	cout << "enter numbers for iverc1 end for -1." << endl;
	cin >> num;
	while ( num != -1) {
		ivec1.push_back(num);
		cin >> num;
	}	
	cout << "enter numbers for iverc2 end for -1." << endl;
	//标准从输入读取数据的写法
	cin >> num;
	while ( num != -1) {
		ivec2.push_back(num);
		cin >> num;
	}	
	if (ivec1.size() != ivec2.size())
		cout << "there are not same." << endl;
	else if (ivec1.size() == 0)
			cout << "there are same." << endl;
	
	else {
		vector<int>::iterator iter1, iter2;
		iter1 = ivec1.begin();
		iter2 = ivec2.begin();
		while (*iter1 == *iter2 && iter1 != ivec1.end() && iter2 != ivec2.end())
			++iter1;
			++iter2;
		if (iter1 == ivec1.end()) // 奇怪的问题,多于两个判断不正确
			cout << "there are same." << endl;
		else 
			cout << "there are not same" << endl;
	}
	return 0;

}	
