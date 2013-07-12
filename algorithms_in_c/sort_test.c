/*
 * =====================================================================================
 *
 *       Filename:  sort_test.c
 *
 *    Description:  sort_test.c
 *
 *        Version:  1.0
 *        Created:  Wednesday 10 July 2013 03:46:13  CST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhang Dongsheng (mars), zhangdongsheng1224@gmail.com
 *   Organization:  HANGZHOU DIANZI UNIVERSITY
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
int a[N] = {0};
int b[N] = {0};

void merge(int a[], int l, int m, int r)
{
	// 合并a 的 l - m,到  b 的 l - m
	int i, j, k = l;
	for (i = l, j = m + 1; i <= m && j <= r;) {
		if (a[i] <= a[j]) 
			b[k++] = a[i++];
		 else
			b[k++] = a[j++];
	}
	while (i <= m)
		b[k++] = a[i++];
	while (j <= r)
		b[k++] = a[j++];
	for (i = l; i <= r; ++i)
		a[i] = b[i];
}	

void mergesort(int a[], int l, int r)
{
	int m = (l + r) / 2;
	if (r <= l)
		return;
	mergesort(a, l, m);
	mergesort(a, m + 1, r);
	merge(a, l, m, r);
}	



int main()
{
	int i;
	srandom(time(NULL));
	printf("before sort:\n");
	for (i = 0; i < N; ++i) {
		a[i] = 100 * (1.0 * rand() / RAND_MAX);
		printf("%3d ", a[i]);
	}
	printf("\n");
	mergesort(a, 0, N - 1);
	printf("after sort:\n");
	for (i = 0; i < N; ++i) {
		printf("%3d ", b[i]);
	}
	printf("\n");
	return 0;
}	

