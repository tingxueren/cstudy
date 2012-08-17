#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	while (1)
		malloc(sizeof(int) * 100);
	return 0;	
}	
