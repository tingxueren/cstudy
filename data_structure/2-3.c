/*
 * =====================================================================================
 *
 *       Filename:  2-3.c
 *
 *    Description:  2-3
 *
 *        Version:  1.0
 *        Created:  03/23/2013 08:13:40 PM
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

void insertsort(int a[], int n)
{
	int i, j, tmp;
	for (i = 1; i < n; i++) {
		tmp = a[i];
		j = i - 1;
		while (j >= 0 && a[j] > tmp) {
			a[j + 1] = a[j];
			j--;
		
		}
		a[j + 1] = tmp;
	
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
	insertsort(a, 10);
	printf("The result of insertion sorting for the array is\n");
	for (i = 0; i < 10; i++)
		printf("%d ", a[i]);
	
	printf("\nProgram %s\n\n", argv[0]);

	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
