/* getnum.c */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "getnum.h"

void getnum(int *p, int LEN, int M)
{
	int i;
	srand(time(NULL));
	for (i = 0; i < LEN; i++) {
		p[i] = rand() % M;
		printf("%d\t", p[i]);
		if ((i+1) % 10 == 0) printf("\n");
	}
	printf("\nInitialize the array succeed.\n");
}	

