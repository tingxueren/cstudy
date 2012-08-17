/* counting_sort_ver2.c */
#include <stdio.h>
#include <stdlib.h>
#include "counting_sort_ver2.h"

void countingsort(int index[], int data[], int LEN, int M)
{
	int i;
	int *pncount = (int *)malloc(sizeof(int) * M);

	for (i = 0; i < M; i++)
		pncount[i] = 0;

	for (i = 0; i < LEN; i++)
		pncount[index[i]]++;

	for (i = 1; i < M; i++)
		pncount[i] = pncount[i] + pncount[i-1];

	int *pnsort = (int *)malloc(sizeof(int) * LEN);

	for (i = LEN - 1; i >= 0; i--) {
		pncount[index[i]]--;
		pnsort[pncount[index[i]]] = data[i];
	
	}
	for (i = 0; i < LEN; i++)
		data[i] = pnsort[i];

	free(pnsort);
	free(pncount);

}	

