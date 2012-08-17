
#include "insertion_sort_part.h"

void insertion_sort(int *p, int M)
{
	int i, j, key;
	for (j = 1; j < M; j++) {
		key = p[j];
		i = j - 1;
		while (i >= 0 && p[i] > key) {
			p[i+1] = p[i];
			i--;
		}
		p[i+1] = key;
	}

}	

