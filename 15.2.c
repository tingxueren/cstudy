#include <stdio.h>

int main(void)
{
	char *p = "Hello";
	size_t n = sizeof ((int) * p);
	printf("%d\n", n);
	
	return 0;
}	
