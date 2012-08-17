#include <stdio.h>
#include <stdlib.h>
#include "getnum.h"
#include "counting_sort.h"
#define LEN 10
#define M 100 /* max in array */

int main(void)
{	
	int i, a[LEN], b[LEN];
	getnum(a, LEN, M);
	//printf("%d\n", sizeof(a) / sizeof (a[0]));
	for (i = 0; i < LEN; i++)
		b[i] = 0;
	countingsort(a, b, LEN, M);
	printf("\nThe sorted array:\n");
	for (i = 0; i < LEN; i++) {
		printf("%d\t", b[i]);
		if ((i+1) % 10 == 0) printf("\n");

	}
	return 0;

}	
