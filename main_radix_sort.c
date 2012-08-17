/* main_radix_sort.c */
#include <stdio.h>
#include <stdlib.h>
#include "getnum.h"
#include "radix_sort.h"
#define LEN 10
#define M 1000

int main(void)
{
	int i;
	int str[LEN];
	getnum(str, LEN, M);
	radixsort(str,LEN);
	printf("The sorted array is:\n ");
	for (i = 0; i < LEN; i++){
	        printf("%d\t",str[i]);
	        if((i+1) % 10 == 0) printf("\n");
	}

	return 0;
}
