#include <stdio.h>
#include <math.h>

double myround(double x)
{
	if (x >= 0.0) 
		return floor(x);
	else
		return floor(x);
}

int main(void)
{
	double n;
	printf("please input number:\n");
	scanf("%lf",&n);
	printf("the result is %lf.\n", myround(n));
	return 0;
}
