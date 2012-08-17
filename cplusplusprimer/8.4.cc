// 8.4.cpp 
// 主函数以cin为实参调用get函数
#include "get.hpp"
#include <iostream>
using namespace std;

int main()
{
	double dval;

	get(cin);
	cin >> dval; // 重新使用恢复后的流
	cout << dval << endl;

	return 0;
}	
