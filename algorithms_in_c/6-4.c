/*
 * =====================================================================================
 *
 *       Filename:  6-4.c
 *
 *    Description:  6-4
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

// a[] a[l] ... a[r] 冒泡排序
void bubble(Item a[], int l, int r)
{
	int i, j;
	for (i = l; i < r; ++i) 
		for (j = r; j > l; --j) 
			compexch(a[j - 1], a[j]);
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
	bubble(a, 0, N - 1);
	for (i = 0; i < N; ++i)
		printf("%3d ", a[i]);
	printf("\n");
	return 0;

}	
