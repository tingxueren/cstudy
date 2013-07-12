/*
 * =====================================================================================
 *
 *       Filename:  6-5.c
 *
 *    Description:  6-5
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

// a[] a[l] ... a[r] 希尔排序
void shellsort(Item a[], int l, int r)
{
	int i, j, h;
	Item v;
	// h 为步长, 计算h的最大值
	for (h = 1; h <= (r - l) / 9; h = 3 * h + 1);
	for (; h > 0; h /= 3) {
		// ++i 为了取得多个子序列
		for (i = l + h; i <= r; ++i) {
			j = i;
			v = a[i];
			while (j >= l + h && less(v, a[j - h])) {
				a[j] = a[j - h];
				j -= h;
			}
			a[j] = v;
		}
	
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
	shellsort(a, 0, N - 1);
	for (i = 0; i < N; ++i)
		printf("%3d ", a[i]);
	printf("\n");
	return 0;

}	
