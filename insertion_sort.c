#include <stdio.h>
#define len 6

int main(void)
{
	int i, j, key;
	int a[6] = { 5, 2, 4, 6, 1, 3};
	for (i = 0; i < len; i++ )
		printf("%d ", a[i]);
	printf("\n");
	for (j = 1; j < len; j++){
		key = a[j];
		i = j - 1;
		while (i >= 0 && a[i] > key){
			a[i+1] = a[i];
			i--;
		}
		a[i+1] = key;
	
	}
	for (i = 0; i < len; i++)
		printf("%d ", a[i]);
	printf("\n");
	return 0;	
}	
