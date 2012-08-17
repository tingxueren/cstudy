#include <stdio.h>
#define A 34
#define C 79
#define M 1000
#define N 100
#define SEED 565

int main()
{
	int i, x[N];
	x[0] = SEED;
	for (i = 0; i < N; i++) 
		x[i+1] = (A * x[i] + C) % M;
	for (i = 0; i < N; i++)
		printf("%6d%c", x[i], (i%10 == 9 || i == N-1) ? '\n' : '  ');
	return 0;


}	

