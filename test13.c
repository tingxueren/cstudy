#include <stdio.h>

int main()
{
	union {
		double d;
		float f;
	} u;

	u.f = 20.0;
	u.d = 10.0;
	printf("put in a double, pull out a float f = %f \n", u.f);	

	u.f = 10.0;
	printf("put in a float, pull out a double d = %f \n", u.d);
	return 0;
}	
