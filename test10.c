#include <stdio.h>

int main(void)
{
	int i, j;
	int a[100];
	printf("The stack top is near %p\n", &i);
	printf("The address of j is %p\n", &j);
	printf("The address of a[100] is %p\n", a);

	return 0;
}	
