#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "max_heapify.h"
#include "build_max_heap.h"
#define M 11
#define N 100

int main(void)
{	
	int i, tmp, a[M];
	srand(time(NULL));
	for (i = 1; i < M; i++) {
		a[i] = rand() % N;
		printf("%d\t", a[i]);
		if (i % 10 == 0) printf("\n");
	}
	printf("\nInitialize the array succeed.\n");

	max_heapify(a, 1, M - 1);
#if 0
	for (i = M - 1; i > 0; i--) {
		tmp = a[i];
		a[i] = a[1];
		a[1] = tmp;
		max_heapify(a, 0, i - 1);
	}
#endif	
	printf ( "\nThe sorted array:\n");
	for (i = 1; i < M; i++) {
		printf("%d\t", a[i]);
		if (i % 10 == 0) printf("\n");	
			
	}
	return 0;

}	
