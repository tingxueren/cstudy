#include <stdio.h>

#define LEN 5
int a[LEN] = { 10, 5, 2, 4, 7};

void selection_sort(void)
{
	int i, j, min, temp;
	for (i = 0; i < LEN; i++){
		printf("%d\t%d\t%d\t%d\t%d\n ",
			        a[0], a[1], a[2], a[3], a[4]);
		min = i;
		for (j = i+1; j < LEN; j++){
			if (a[min] > a[j])
				min = j;
			if ((min != i) && j == (LEN-1)){
				temp = a[i];
				a[i] = a[min];
				a[min] = temp;
			}	
		}
	}
}

int main(void)
{
	selection_sort();
	return 0;
}	

