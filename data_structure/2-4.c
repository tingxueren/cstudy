/*
 * =====================================================================================
 *
 *       Filename:  2-5.c
 *
 *    Description:  2-5
 *
 *        Version:  1.0
 *        Created:  03/23/2013 08:29:01 PM
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

void selectsort(int k[], int n)
{
	int i, j, min, tmp;
	for (i = 0; i < n; i++) {
		min = i;
		for (j = i + 1; j < n; j++) {
			if (k[j] < k[min])
				min = j;
		}
		if (min != i) {
			tmp = k[i];
			k[i] = k[min];
			k[min] =tmp; 
		}

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
	int a[10] = {12, 0, 8, 0, 9, 90, 49, 99, -9, 1};
	printf("The original data array is\n");
	for (i = 0; i < 10; i++)
		printf("%d ", a[i]);
	printf("\n");
	selectsort(a, 10);
	printf("The result of selection sorting for the array is\n");
	for (i = 0; i < 10; i++)
		printf("%d ", a[i]);
	printf("\nProgram %s\n\n", argv[0]);

	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
