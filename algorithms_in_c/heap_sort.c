/*
 * =====================================================================================
 *
 *       Filename:  heap_sort.c
 *
 *    Description:  heap_sort.c
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
typedef int Item;
#define key(A) (A)
#define less(A, B) (key(A) < key(B))
#define exch(A, B) {Item t = A; A = B; B = t;}
#define compexch(A, B) if (less(B, A)) exch(A, B)
#define MAX 10
//#define pq(A) a[r - 1 + A]
int a[MAX + 1] = {0};
//int b[N] = {0};

void fixDown(Item a[], int k, int N)
{
	int j;
	while (2 * k <= N) {
		j = 2 * k;
		if (j < N && less(a[j], a[j + 1]))
			j++;
		if (!less(a[k], a[j]))
			break;
		exch(a[k], a[j]);
		k = j;
	}
}	

void heapsort(Item a[], int l, int r)
{
	int k, N = r - l + 1;
	for (k = N / 2; k >= 1; k--) {
		// k >= 1, 保证 a[1] a[N] -> a[l] a[r] 转换
		fixDown(&a[l - 1 + 0], k, N);
	}
	while (N > 1) {
		exch(a[l - 1 + 1], a[l - 1 + N]);
		fixDown(&a[l - 1 + 0], l, --N);
	}
}	

int main()
{
	int i;
	srandom(time(NULL));
	printf("before sort:\n");
	for (i = 1; i <= MAX; ++i) {
		a[i] = 100 * (1.0 * rand() / RAND_MAX);
		printf("%3d ", a[i]);
	}
	printf("\n");
	//mergesort(a, 0, N - 1);
	heapsort(a, 1, MAX);
	printf("after sort:\n");
	for (i = 1; i <= MAX; ++i) {
		printf("%3d ", a[i]);
	}
	printf("\n");
	return 0;
}	

