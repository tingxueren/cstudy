/*
 * =====================================================================================
 *
 *       Filename:  heap_sort.c
 *
 *    Description:  heap_sort
 *
 *        Version:  1.0
 *        Created:  Friday 12 July 2013 09:11:29  CST
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
#define MAX 5

void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}	

void max_heapify(int a[], int heap_size, int root)
{
	int left = 2 * root;
	int right = left + 1;
	int largest = root;
	if (left <= heap_size && a[left] > a[root])
		largest = left;
	if (right <= heap_size && a[right] > a[largest])
		largest = right;
	//printf("largetst = %d\n", largest);
	if (largest != root) {
		swap(&a[root], &a[largest]);
		max_heapify(a, heap_size, largest);
	}
}	

void build_max_heap(int a[], int l, int r)
{
	int heap_size = r - l + 1;
	int i;
	for (i = heap_size / 2; i >= 1; --i) {
		max_heapify(a, heap_size, i);
	}
}	

void heap_sort(int a[], int l, int r)
{
	build_max_heap(a, l, r);
	int i;
	int heap_size = r - l + 1;
	for (i = heap_size; i >= 2; --i) {
		swap(&a[l], &a[l + heap_size - 1]);
		// heap 大小减去 1
		heap_size--;
		max_heapify(a, heap_size, l);
	}
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
	heap_sort(a, 1, MAX);
	//max_heapify(a, MAX, 1);
	printf("after sort:\n");
	for (i = 1; i <= MAX; ++i) {
		printf("%3d ", a[i]);
	}
	printf("\n");
	return 0;
}	

