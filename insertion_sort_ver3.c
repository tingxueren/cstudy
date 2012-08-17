/* insertion_sort_ver3.c */
/*  调用外部函数实现插入排序 */
#include <stdio.h>
#include <stdlib.h>
#include "getnum.h"
#include "insertion_sort_part.h"
#define M 10
#define N 100

int main(void)
{
	int i, a[M];
	getnum(a, M, N);
	insertion_sort(a, M);
	printf("the sorted array:\n");
	for (i = 0; i < M; i++) {
		printf("%d\t", a[i]);
		if ((i+1) % 10 == 0) printf("\n");
	}
	return 0;
}


