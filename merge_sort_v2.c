#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LEN 10
#define MAX 100

void getnum(int *p )
{
	int i;
        srand(time(NULL));
        for (i = 0; i < LEN; i++){
		*(p+i) = rand() % MAX;
		printf("%d\t", *(p+i));
		if((i+1) % 10 == 0) printf("\n");
				
	}
	printf("\nInitialize the array succeed.\n");

}


void merge(int *p, int start, int mid, int end)
{
	int n1, n2, i, j;
	n1 = mid - start + 1;
	n2 = end - mid;
	int left[n1], right[n2];
	for (i = 0; i < n1; i++)
		left[i] = p[start+i];  /* left[]  a[start] ~ a[mid]   */
	for (j = 0; j < n2; j++)
		right[j] = p[mid+j+1]; /* right[] a[mid+1] ~ a[end] */
	i = j = 0;
	while (i < n1 && j < n2) {
		if (left[i] <= right[j])
			p[start++] = left[i++];
		else
			p[start++] = right[j++];
	}
	while (i < n1)
		p[start++] = left[i++];
	while (j < n2)
		p[start++] = right[j++];

}	

void merge_sort(int *p, int start, int end)
{	
	int *q = p;
	int mid;
	if (start < end) {
		mid = (start + end) / 2;
		merge_sort(q, start, mid); /* divide conquer combine */
		merge_sort(q, mid+1, end);
		merge(q, start, mid, end);
	}

}

int main(void)
{
	int i;
	int str[LEN];
	getnum(str);
	merge_sort(str, 0, LEN-1);
	printf("The sorted array is:\n ");
	for (i = 0; i < LEN; i++){
	        printf("%d\t",str[i]);
	        if((i+1) % 10 == 0) printf("\n");
	}
	
	return 0;
}	
