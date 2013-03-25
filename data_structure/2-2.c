/*
 * =====================================================================================
 *
 *       Filename:  2-2.c
 *
 *    Description:  2-2
 *
 *        Version:  1.0
 *        Created:  03/23/2013 07:41:14 PM
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

int bin_search(int A[], int n, int key)
{
	int low, high, mid;
	low = 0;
	high = n - 1;
	while (low <= high) {
		mid = (low + high) / 2;
		if (A[mid] == key) return mid;
		if (A[mid] < key)
			low = mid + 1;
		if (A[mid] > key)
			high = mid - 1;
	}
	return -1;
}	


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  main function
 * =====================================================================================
 */
int main(int argc, char *argv[])
{
	int A[10] = {2, 3, 5, 7, 9, 12, 15, 18, 20, 33};
	int i, n, addr;
	printf("The contents of the Array A[10] are\n");
	for (i = 0; i < 10; i++)
		printf("%d ", A[i]);
	printf("\n");
	printf("Please input a interger for serach\n");
	scanf("%d", &n);
	addr = bin_search(A, 10, n);
	if (-1 != addr)
		printf("%d is at the %dth unit is arry A\n", n, addr);
	else
		printf("There is no %d in array A\n", n);


	printf("\nProgram %s\n\n", argv[0]);

	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
