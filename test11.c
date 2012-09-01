#include <stdio.h>

int foo(int i)
{
	if (i > 0)
		foo(--i);
	else
		printf("i has reached zero.\n");
	return 0;

}	

int main()
{
	foo(1);
	return 0;
}	
