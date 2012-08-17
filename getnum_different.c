/* getnum_different.c */
/* 生成随机数组p[LEN],p[i] < M,且p[i] != p[j] if i != j,
 * 要保证LEN <= M
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "getnum_different.h"

void getnum(int *p, int LEN, int M)
{
	int i, j, b[M];
	for (i = 0; i < M; i++) {
		b[i] = i;
	}
	srand(time(NULL));
	for (i = 0; i < LEN; i++) {
		j = rand() % M;
		M--;
		p[i] = b[j];
		b[j] = b[M];
		printf("%d\t", p[i]);
		if ((i+1) % 10 == 0) printf("\n");
	}
	printf("\nInitialize the array succeed.\n");
}	

