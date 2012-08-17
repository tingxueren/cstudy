/* main_counting_sort_ver2.c */
#include <stdio.h>
#include <stdlib.h>
#include "getnum.h"
#include "counting_sort_ver2.h"
#define LEN 10
#define M 100 /* max in array */

int main(void)
{	
	int i, a[LEN];
	getnum(a, LEN, M);
	//printf("%d\n", sizeof(a) / sizeof (a[0]));
	countingsort(a, a, LEN, M);
	printf("\nThe sorted array:\n");
	for (i = 0; i < LEN; i++) {
		printf("%d\t", a[i]);
		if ((i+1) % 10 == 0) printf("\n");

	}
	return 0;

}	
