#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LEN 10
#define M 100

int str[LEN];

void getnum( )
{
	int i;
        srand(time(NULL));
        for (i = 0; i < LEN; i++){
		str[i] = rand() % M;
		printf("%d\t", str[i]);
		if((i+1) % 10 == 0) printf("\n");
				
	}
	printf("\nInitialize the array succeed.\n");

}
#if 0
/* 这种做法是错误的,当数列中key的值有多个就悲剧,可能还会造成死循环 */	 
int partition(int start, int end)
{
	int key,tmp; 
	key = str[start];
	while (start < end){
		while (str[start] < key)
			++ start;
		while (str[end] > key)
			-- end;
		tmp = str[start];
		str[start] = str[end];
		str[end] = tmp;
		++ start;
		-- end;
	}
	str[start] = key; /* 这句不清楚为什么加上 */
	return start;

}
#endif

int partition(int start, int end)
{
	int key;
	key = str[start];
	while (start < end){
/* start < end 条件很重要,这个条件不会默认从上一步得到,和if不一样 */
		while ( start < end && str[end] >= key) end--;
			str[start] = str[end];
		while ( start < end && str[start] <= key) start++;
			str[end] = str[start];
	}
	str[start] = key;
	return start;
}	

void quicksort(int start, int end)
{
		int mid;
		if (end > start) {
		mid = partition(start, end);
		quicksort(start, mid-1);
		quicksort(mid+1, end);
		}
		
}

int main(void)
{
	int i;
	getnum();
	quicksort(0, LEN-1);
	printf("The sorted array is:\n ");
	for (i = 0; i < LEN; i++){
	        printf("%d\t",str[i]);
	        if((i+1) % 10 == 0) printf("\n");
	}
	return 0;
}	
