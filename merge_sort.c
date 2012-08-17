#include <stdio.h>
#include <stdlib.h>
#define LEN 8
#define MAX 10

int a[LEN] = {5, 2, 4, 7, 1, 3, 2, 6};

void merge(int start, int mid, int end)
{
	int n1, n2, i, j;
	n1 = mid - start + 1;
	n2 = end - mid;
	int left[n1], right[n2];
	for (i = 0; i < n1; i++)
		left[i] = a[start+i];  /* left[]  a[start] ~ a[mid]   */
	for (j = 0; j < n2; j++)
		right[j] = a[mid+j+1]; /* right[] a[mid+1] ~ a[end] */
	i = j = 0;
	while (i < n1 && j < n2) {
		if (left[i] <= right[j])
			a[start++] = left[i++];
		else
			a[start++] = right[j++];
	}
	while (i < n1)
		a[start++] = left[i++];
	while (j < n2)
		a[start++] = right[j++];

}	

void merge_sort(int start, int end)
{
	int mid;
	if (start < end) {
		mid = (start + end) / 2;
		merge_sort(start, mid); /* divide conquer combine */
		merge_sort(mid+1, end);
		merge(start, mid, end);
	}

}

int main(void)
{	
	int i;
	for (i = 0; i < LEN; i++)
		printf("%d ", a[i]);
	printf("\n");
	merge_sort(0, LEN-1);
	for (i = 0; i < LEN; i++)
		printf("%d ", a[i]);
	printf("\n");
	return 0;

}	
