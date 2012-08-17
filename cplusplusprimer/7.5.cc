#include <iostream>
using namespace std;

int bigger(int i, const int *ip) //此处不需要修改*ip所指向的对象的数值,最好加上const
{
	return i >= *ip ? i : *ip;
}	

int main()
{
	int a1, *p = new int(); //指针变量要初始化后才能用,int后面()是用来初始化的

	cout << "Enter two number: " << endl;
	cin >> a1 >> *p;
	cout << "The bigger one is: " << bigger(a1, p) << endl; // 此处不要把p,写成*p了,要指针,不要对象
	delete p; // 不要忘记释放内存,否则会引起内存泄露
	return 0;
}	

