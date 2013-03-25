/*
 * =====================================================================================
 *
 *       Filename:  2-5.c
 *
 *    Description:  2-5
 *
 *        Version:  1.0
 *        Created:  03/23/2013 08:45:48 PM
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

void bubblesort(int k[], int n)
{
	int i, j, tmp;
	int flag = 1;
	for (i = 0; i < n && flag == 1; i++) {
		flag = 0;
		// 注意 j 范围 
		for (j = 0; j < n - i - 1; j++) {
			// 这地方有 j+1, j 为 n - i + 1
			if (k[j] > k[j + 1]) {
				tmp = k[j];
				k[j] = k[j + 1];
				k[j + 1] = tmp;
				flag = 1;
				
			}
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
	bubblesort(a, 10);
	printf("The result of bubble sorting for the array is\n");
	for (i = 0; i < 10; i++)
		printf("%d ", a[i]);
	printf("\nProgram %s\n\n", argv[0]);

	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
