/*
 * =====================================================================================
 *
 *       Filename:  7-1.c
 *
 *    Description:  7-1
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
/* 
int partition(Item a[], int l, int r)
{
	int i = l - 1, j = r;
	Item v = a[r];
	for (; ;) {
		while (less(a[++i], v));
		while (less(v, a[--j]))
			if (j == l)
				break;
		if (i >= j)
			break;
		exch(a[i], a[j]);
	}
	exch(a[i], a[r]);
	return i;

}	
*/
// 标准的不会出错的做法
int partition(int a[], int low, int high)
{
	int pivotkey = a[low];
	while (low < high) {
		if (low < high && a[high] >= pivotkey) --high;
		a[low] = a[high];
		if (low < high && a[low] <= pivotkey) ++low;
		a[high] = a[low];
	}
	a[low] = pivotkey;
	return low;
}	

/* 自己写的partition还是有问题
int partition(Item a[], int l, int r)
{
	Item v = a[l];
	int i = l, j = r;
	while (i < j) {
		// 是否 不管 a[++i] 与 v 关系，++i 都会执行？
		//
		//while (a[++i] <= v && i < j);
		//while (a[j--] >= v && j > i);
		for (; a[i] <= v && i < j; ++i);
		for (; a[j] >= v && i < j; --j);
		if (i < j)
			exch(a[i], a[j]);
	
	}
	exch(a[l], a[i]);
	return i;

}
*/
void quicksort(Item a[], int l, int r)
{
	int i;
	if (r <= l)
		return;
	i = partition(a, l, r);
	quicksort(a, l, i - 1);
	quicksort(a, i + 1, r);
}	
int main(int argc, char *argv[])
{
	int i, N = atoi(argv[1]), sw = atoi(argv[2]);
	int *a = malloc(N * sizeof(int));
	srandom(time(NULL));
	if (sw) {
		for (i = 0; i < N; ++i) {
			a[i] = 1000 * (1.0 * rand() / RAND_MAX);
			printf("%3d ", a[i]);
		}
		printf("\n");
	} else {
		while (scanf("%d", &a[N]) == 1)
			N++;
	}
	quicksort(a, 0, N - 1);
	for (i = 0; i < N; ++i)
		printf("%3d ", a[i]);
	printf("\n");
	return 0;

}	
