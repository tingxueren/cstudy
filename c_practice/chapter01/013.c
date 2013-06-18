/*
 * =====================================================================================
 *
 *       Filename:  013.c
 *
 *    Description:  013
 *
 *        Version:  1.0
 *        Created:  06/06/2013 04:45:16 PM
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
	int k = 5;
	for (i = 1; i <= k; ++i) {
		for (j = k; j > i; --j)
			printf(" ");
		for (j = 1; j < 2 * i; ++j)
			printf("#");
		printf("\n");
		
	}
	return 0;
}	
