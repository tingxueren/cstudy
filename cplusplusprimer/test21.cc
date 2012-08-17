#include <iostream>
using namespace std;

struct NoName {
	// 必须要先声明函数,然后才能定义
	NoName(): pstring(new string), i(0), d(0) {};
	NoName(const NoName& other);
private:
	string *pstring;
	int i;
	double d;
};

NoName::NoName(const NoName& other)
{
	pstring = new string;
	*pstring = *(other.pstring);
	i = other.i;
	d = other.d;
		
}	

// main() 不能不写, 否则找不到程序的入口
int main()
{}	
