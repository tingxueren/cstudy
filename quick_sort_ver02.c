/*
 * =====================================================================================
 *
 *       Filename:  quick_sort.c
 *
 *    Description:  quick_sort
 *
 *        Version:  1.0
 *        Created:  04/24/2013 09:10:56 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhang Dongsheng (mars), zhangdongsheng1224@gmail.com
 *   Organization:  HANGZHOU DIANZI UNIVERSITY
 *
 * =====================================================================================
 */


#include <errno.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Partition(int a[], int low, int high)
{
	int pivotkey = a[low];
	while (low < high) {
		if (low < high && a[high] >= pivotkey) --high;
		a[low] = a[high];
		if (low < high && a[low] <= pivotkey) ++low;
		a[high] = a[low];
	}
	a[low] = pivotkey;
	return low;
}	

void Quick_Sort(int a[], int low, int high)
{
	if (low < high) {
		int position = Partition(a, low, high);
		Quick_Sort(a, low, position - 1);
		Quick_Sort(a, position + 1, high);
	}
		
}	


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  main function
 * =====================================================================================
 */
int main(int argc, char *argv[])
{
	int i;
	int a[] = {45, 56, 23,5};
	Quick_Sort(a, 0, 3);
	for (i = 0; i < 4; i++) {
		printf("%d ", a[i]);
	}
	printf("\nProgram %s\n\n", argv[0]);

	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
