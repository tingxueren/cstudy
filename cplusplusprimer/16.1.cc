#include <iostream>
using namespace std;

template <typename T>
T absVal(T val)
{
	return val > 0 ? val : -val;
}	

int main()
{
	int ival = -3;
	double dval = 0.88;
	float fval = -12.3;

	cout << absVal(ival) << endl;
	cout << absVal(dval) << endl;
	cout << absVal(fval) << endl;

	return 0;

}	
