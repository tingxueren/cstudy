#include <stdio.h>

int main(void)
{
	int i = 3;
	int *p;
	*p = i;
	printf("%d\n%d\n",*p, p);
	}
