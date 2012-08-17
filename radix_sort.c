/* radix_sort.c */
#include <stdio.h>
#include <stdlib.h>
#include "counting_sort_ver2.h"
#include "radix_sort.h"

void radixsort(int data[], int LEN)
{
	int *dataradix = (int *)malloc(sizeof(int) * LEN);
	int radixbase = 1;
	bool isok = false;

	while (!isok) {
		isok = true;
		radixbase *= 10;
		for (int i = 0; i < LEN; i++) {
			dataradix[i] = data[i] % radixbase;
			dataradix[i] /= (radixbase / 10);

			if (dataradix[i] > 0)
				isok = false;

		}

		if (isok)
			break;

		countingsort(dataradix, data, LEN, 10);
	}

	free(dataradix);


}	

