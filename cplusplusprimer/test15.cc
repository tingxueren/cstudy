#include <iostream>
using namespace std;

int main(int argc, char *argv[]) // argv 是个指针数组,每个指向个参数
{
	int i = 10;
//	int *pi = i; //这种初始化是错误的,pi是int*的类型
	int *pi = 0;
	pi = &i;
	int *qi = &i;
	cout << "i: \t" << i << "*pi:\t" << *pi
	     << "*qi:\t" << *qi << endl;
	cout << argv[0] << endl;
	return 0;

}	
