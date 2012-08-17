#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

int main()
{
	vector<string> svec;
	string str;
	cout << "Enter a string vector:" << endl;
	while (cin >> str)
		svec.push_back(str);
	char **parr = new char*[svec.size()]; //指向字符串指针的指针
	size_t ix = 0;
	cout << "Items int the vector:" << endl;//打印vector元素
	for (vector<string>::iterator iter = svec.begin();
		       	iter != svec.end(); ++iter)
		cout << *iter << endl;

	for (vector<string>::iterator iter = svec.begin();
		       	iter != svec.end(); ++iter, ++ix) {
		char *p = new char[(*iter).size() + 1];
		strcpy(p, (*iter).c_str());
		parr[ix] = p;
		
	
	}
	cout << "Items in the array:" << endl;
	for (ix = 0; ix != svec.size(); ++ix)
		cout << parr[ix] << endl;
	for (ix = 0; ix != svec.size(); ++ix)
		delete [] parr[ix];
	delete [] parr;
	
	return 0;
 	



}	
