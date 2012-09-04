#include <stdio.h>
#include <stdlib.h>

int current_element = 0;
int total_element = 50;
int *dynamic = (int *)malloc(total_element);

void add_element(int i)
{
	int *p;
	if (current_element == total_element -1) {
		total_element *= 2;
		printf("current total_element = %d\n", total_element);
		p = (int *)realloc(dynamic, total_element*sizeof(int));
		if (p == NULL) 
			printf("Coundn't expand the table.\n");
		else
			dynamic = p;
	}
	current_element++;
	printf("current_element = %d\n", current_element);
	dynamic[current_element] = i;
}	

int main()
{
	int j;
	for (j = 0; j < 60; ++j) {
		add_element(j);
		printf("dynamic[%d] = %d\n", j, dynamic[j]);
	}
	return 0;
}	
