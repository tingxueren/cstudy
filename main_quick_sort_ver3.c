#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "getnum.h"
#include "quick_sort_ver3.h"
#define LEN 10
#define M 100
int main(void)
{
	int i;
	int str[LEN];
	getnum(str);
	quicksort(str, 0, LEN-1);
	printf("The sorted array is:\n ");
	for (i = 0; i < LEN; i++){
	        printf("%d\t",str[i]);
	        if((i+1) % 10 == 0) printf("\n");
	}

	return 0;
}
