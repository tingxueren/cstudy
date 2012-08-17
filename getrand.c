#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int i, j, M = 6;
	int b[M];
	int a[M];
	for (i = 0; i < M; i++)
		b[i] = i + 32;
	srand(time(NULL));
	for (i = 0; i < 6; i++) {
		j = rand() % M;
		M--;
		a[i] = b[j];
		b[j] = b[M];
		printf("%d\t", a[i]);
	}
	printf("\n");
	return 0;
}	
