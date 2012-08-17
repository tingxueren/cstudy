#include <stdio.h>

int test(int a) 
{
	a = a + 1;
	return a;
}	

int main()
{
	int b = 0;
	test(b);
	printf("%d\n", b);
	return 0;

}	
