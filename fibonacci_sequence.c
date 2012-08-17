/* fibonacci_sequence.c */
#include <stdio.h>
#define M 50
int fibonacci[M];

int main(void)
{
	int i;
	fibonacci[0] = 0;
	fibonacci[1] = 1;
	for (i = 2; i < M; i++) 
		fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
	
	for (i = 0; i < M; i++) 
		printf("The %dth fibonacci number is :%d.\n", i, fibonacci[i]);

	return 0;
}	
