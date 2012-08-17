/*quick_sort_ver3.c */
#include <stdio.h>
#include "quick_sort_ver3.h"

int partition(int *p, int start, int end)
{
    int i, j, key, tmp;
    i = start - 1;
    key = p[end];
    for (j = start; j < end; j++) {
        if (p[j] <= key) i++;
        tmp = p[i];
        p[i] = p[j];
        p[j] = tmp;
    }
    tmp = p[i+1];
    p[i+1] = p[end];
    p[end] = tmp;
    return i + 1;


}

void quicksort(int *p, int start, int end)
{
    if (start < end) {
        int mid = partition(p, start, end);
        quicksort(p, start, mid -1);
        quicksort(p, mid + 1, end);

    }

}
