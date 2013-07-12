/*
 * =====================================================================================
 *
 *       Filename:  qsort.c
 *
 *    Description:  qsort.c
 *
 *        Version:  1.0
 *        Created:  Thursday 11 July 2013 08:28:54  CST
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
#define MAX 10
// swap 函数竟然能写错!!!!
void swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}	

int partition(int a[], int l, int r)
{
	int p = l;
	int q = l + 1;
	int key = a[l];
	while (q <= r) {
		if (a[q] <= key) {
			p++;
			swap(&a[p], &a[q]);
		} 
		q++;
	}
	swap(&a[l], &a[p]);
	return p;
}

void quicksort(int* array, int lhs, int rhs)
{
	if (array == NULL)
	{
		printf("Wrong Array!\n");
		exit(1);
	}
		
	if (lhs >= rhs) return;

	int mid = partition(array, lhs, rhs);
	quicksort(array, lhs, mid-1);
	quicksort(array, mid+1, rhs);
}

int my_select(int a[], int l, int r, int i)
{
	if (l == r)
		return a[l];
	int p = partition(a, l, r);
	int k = p - l + 1;
	if (k == i)
		return a[p];
	else if (k > i)
		my_select(a, l, p - 1, i);
	else if (k < i)
		my_select(a, p + 1, r, i - k);
}	

int main()
{
	int i, a[MAX + 1];
	srandom(time(NULL));
	printf("before sort:\n");
	for (i = 1; i <= MAX; ++i) {
		a[i] = 100 * (1.0 * rand() / RAND_MAX);
		printf("%3d ", a[i]);
	}
	printf("\n");
	//quicksort(a, 1, MAX);
	printf("%3d\n", my_select(a, 1, MAX, 5));
	//printf("after sort:\n");
	//for (i = 1; i <= MAX; ++i) {
	//	printf("%3d ", a[i]);
	//}
	//printf("\n");
	return 0;
}	

