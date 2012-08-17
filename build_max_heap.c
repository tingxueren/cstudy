/* build_max_heap.c*/
#include <stdio.h>
#include "max_heapify.h"
#include "build_max_heap.h"

void build_max_heap(int *p, int length)
{

	int heapsize = length / 2 - 1;
	int i;
	for (i = heapsize; i >= 0; i--)
		max_heapify(p, i, length);

}
