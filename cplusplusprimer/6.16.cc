#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> ivec1, ivec2;
	int num;
	cout << " Enter items fo vector1: " << endl;
	cin >> num;
	while (num != 32767){  //用32767做个结束符号,否则ctrl+d会直接结束输入
		ivec1.push_back(num);
		cin >> num;
	}	
	cout << " Enter items fo vector2: " << endl;
	cin >> num;
	while (num != 32767){  //用32767做个结束符号,否则ctrl+d会直接结束输入
		ivec2.push_back(num);
		cin >> num;
	}	

	vector<int>::iterator iter1 = ivec1.begin();
	cout << " The elements of vector1: " << endl;
	for (; iter1 != ivec1.end(); ++iter1) 
		cout << *iter1 << " ";
	cout << endl;
	
	vector<int>::iterator iter2 = ivec2.begin();
	cout << " The elements of vector2: " << endl;
	for (; iter2 != ivec2.end(); ++iter2) 
		cout << *iter2 << " ";
	cout << endl;
	
	if (ivec1.size() <= ivec2.size()) { // 这样做比较傻,有更好的办法 可以看答案
		vector<int>::size_type m = ivec1.size(), cnt = 0, in; //size() 类型为size_type 不能给int 为 unsigned int 型号
		                                                      // unsigned int 也不是很合适
//		unsigned int cnt = 0;
		for (in = 0; in != m; ++in) {
			if (ivec1[in] == ivec2[in]) 
				cnt++;
		}
		if (cnt == m)
			cout << " ivec1 is beging of ivec2 " //无法用cout直接输出vector cout << vector 是错误的
			     << endl;
		else
			cout << " ivec1 is not beging of ivec2 "
			     << endl;
	} 
	else {
	 	vector<int>::size_type m = ivec2.size(), cnt = 0, in;
//		unsigned int cnt = 0;
		for (in = 0; in != m; ++in) {
			if (ivec1[in] == ivec2[in]) 
				cnt++;
		}
		if (cnt == m)
			cout << " ivec2 is beging of ivec1 "
			     << endl;
		else
			cout << " ivec2 is not beging of ivec1 "
			     << endl;
	
	
	}
	return 0;

}	

