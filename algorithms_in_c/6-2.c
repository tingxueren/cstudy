/*
 * =====================================================================================
 *
 *       Filename:  6-2.c
 *
 *    Description:  6-2
 *
 *        Version:  1.0
 *        Created:  Tuesday 09 July 2013 11:30:08  CST
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

// a[] a[l] ... a[r] 选择排序
void selection(Item a[], int l, int r)
{
	int i, j, min;
	for (i = l; i < r; ++i) {
		min = i;
		for (j = i + 1; j <= r; ++j)
			if (less(a[j], a[min]))
				min = j;
		exch(a[min], a[i]);
	}
}	

int main(int argc, char *argv[])
{
	int i, N = atoi(argv[1]), sw = atoi(argv[2]);
	int *a = malloc(N * sizeof(int));
	srandom(time(NULL));
	if (sw) {
		for (i = 0; i < N; ++i)
			a[i] = 1000 * (1.0 * rand() / RAND_MAX);
	} else {
		while (scanf("%d", &a[N]) == 1)
			N++;
	}
	selection(a, 0, N - 1);
	for (i = 0; i < N; ++i)
		printf("%3d ", a[i]);
	printf("\n");
	return 0;

}	
