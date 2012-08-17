#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LEN 10
#define M 100

//int str[LEN];

void getnum(int *p )
{
	int i;
        srand(time(NULL));
        for (i = 0; i < LEN; i++){
		*(p+i) = rand() % M;
		printf("%d\t", *(p+i));
		if((i+1) % 10 == 0) printf("\n");

	}
	printf("\nInitialize the array succeed.\n");

}

int partition(int *p, int start, int end)
{
	int key;
	key = *(p + start);
	while (start < end){
/* start < end 条件很重要,这个条件不会默认从上一步得到,和if不一样 */
/* 从前到后，从后到前交替扫描交换次序 */
		while ( start < end && *(p + end) >= key) end--;
			*(p + start) = *(p + end);
		while ( start < end && *(p + start) <= key) start++;
			*(p + end) = *(p + start);
	}
/* 扫描完成后start = end; 此时end所指示的元素已经赋值给了start--，此时end */
/* 指示的数据无用可以覆盖                                               */


	*(p + start) = key;
	return start;
}

void quicksort(int *p, int start, int end)
{
		int mid;
		int *q;
		q = p;
		if (end > start) {
		mid = partition(q,start, end);
		quicksort(q, start, mid-1);
		quicksort(q ,mid+1, end);
		}

}

int main(void)
{
	int i;
	int str[LEN];
	getnum(str);
	quicksort(str, 0, LEN-1);
	printf("The sorted array is:\n ");
	for (i = 0; i < LEN; i++){
	        printf("%d\t",str[i]);
	        if((i+1) % 10 == 0) printf("\n");
	}

	return 0;
}
