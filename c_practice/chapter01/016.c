/*
 * =====================================================================================
 *
 *       Filename:  016.c
 *
 *    Description:  016
 *
 *        Version:  1.0
 *        Created:  06/06/2013 07:55:35 PM
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
	int i, j;
	for (i = 1; i <= 9; ++i) {
		for (j = 1; j <= i; ++j)
			printf("%d * %d = %d ", i, j, i * j);
		printf("\n");
	}
	return 0;
}	
