#include <stdio.h>

int main(void)
{
	int a, b = 1, c =2;
	printf("a = %d; b = %d; c = %d\n", a, b, c);
	a = b = c;
	printf("a = %d; b = %d; c = %d\n", a, b, c);
	return 0;
}	
