#include <stdio.h>
#include <string.h>

int main()
{
	char c;
	int i;
	double d;
	float f;
	char a[10];
	char j = a[0];
	printf("sizeof(char) is %d.\n", sizeof(c));
	printf("sizeof(int) is %d.\n", sizeof(i));
	printf("sizeof(double) is %d.\n", sizeof(d));
	printf("sizeof(float) is %d.\n", sizeof(f));
	printf("sizeof(a) is %d.\n", sizeof(a));
	printf("sizeof(a[10]) is %d.\n", sizeof(a[10]));
	printf("strlen(a) is %d.\n", strlen(a));
	printf("a is %c.\n", j);
	return 0;
}	
