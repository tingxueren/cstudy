#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LEN 10
#define MAX 10

void getnum(int *p)
{
	int i;
	srand(time(NULL));
	for (i = 0; i < LEN; i++) {
		p[i] = rand() % MAX;
		printf("%d\t", p[i]);
		if ((i+1) % 10 == 0) printf("\n");
	}
	printf("\nInitialize the array succeed.\n");
}	

void insertion_sort(int *p)
{
	int i, j, key;
	for (j = 1; j < LEN; j++) {
		key = p[j];
		i = j - 1;
		while (i >= 0 && p[i] > key) {
			p[i+1] = p[i];
			i--;
		}
		p[i+1] = key;
	}

}	

int main(void)
{
	int i, a[LEN];
	getnum(a);
	insertion_sort(a);
	printf("the sorted array:\n");
	for (i = 0; i < LEN; i++) {
		printf("%d\t", a[i]);
		if ((i+1) % 10 == 0) printf("\n");
	}
	return 0;
}



