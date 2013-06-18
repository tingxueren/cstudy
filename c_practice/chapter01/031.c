/*
 * =====================================================================================
 *
 *       Filename:  031.c
 *
 *    Description:  031
 *
 *        Version:  1.0
 *        Created:  06/07/2013 07:43:23 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhang Dongsheng (mars), zhangdongsheng1224@gmail.com
 *   Organization:  HANGZHOU DIANZI UNIVERSITY
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, sum = 0;
	int a[4][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16},
	};

	printf("The array is:\n");
	for (i = 0; i < 4; ++i) {
		for (j = 0; j < 4; ++j)
			printf("%d\t", a[i][j]);
		sum += a[i][i];
		printf("\n");
	}
	printf("The sum of the diagonal is %d\n", sum);
	return 0;
			
}	
