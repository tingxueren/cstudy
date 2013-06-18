/*
 * =====================================================================================
 *
 *       Filename:  065.c
 *
 *    Description:  065
 *
 *        Version:  1.0
 *        Created:  06/13/2013 08:12:29 PM
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
	int a[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
	int i, j;
	
	for (i = 0; i < 3; ++i) {
		for (j = 0; j < 4; ++j)
			printf("%d ", a[i][j]);
		printf("\n");
	}

	printf("Please input the position like: i = , j =\n");
	scanf("i = %d, j = %d", &i, &j);
	printf("a[%d][%d] = %d\n", i, j, a[i][j]);
	return 0;
}	

