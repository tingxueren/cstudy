// 7.31_a.cpp
// 利用自定义的Sales_item类读入并输出一组交易
#include <iostream>
#include "Sales_item.hpp"
using namespace std;

int main()
{
	Sales_item item;

	//读入一组交易
	cout << "Enter some transactions(ctrl+z to end): "
	     << endl;
	while (item.input(cin)) {
		cout << "The transaction readed is:" << endl;
		item.output(cout);
		cout << endl;
	}
	return 0;
}	
