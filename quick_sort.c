#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LEN 10
#define M 10

int a[LEN];

void getnum() 
{
        int i;
        srand(time(NULL));
        for (i = 0; i < LEN; i++){
		a[i] = rand()%M;
		printf("%d\t",a[i]);
		if((i+1)%LEN == 0) printf("\n");
				
	}
	
}
	
	
int partition(int start, int end)
{
	int tmp, mid, i, j; 
	mid = start;
	tmp = 0; 
	for (i = start+1; i <= end; i++ ){
			if (a[i] < a[mid]){ 
				tmp = a[i];
				for(j = i-1; j >= mid; j--) /* 笨拙的方法,整段的移动 */
					a[j + 1] = a[j];    /* mid ~ i-1 整体移动一位*/			
				a[mid] = tmp;
				mid++; 
			}					
		}	
		return mid;
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
	for (i = 0; i < LEN; i++){
	        printf("%d\t",a[i]);
	        if((i+1)%LEN == 0) printf("\n");
	}
	return 0;
}	
