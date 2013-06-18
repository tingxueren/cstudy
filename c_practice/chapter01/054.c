/*
 * =====================================================================================
 *
 *       Filename:  054.c
 *
 *    Description:  054
 *
 *        Version:  1.0
 *        Created:  06/09/2013 08:43:08 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhang Dongsheng (mars), zhangdongsheng1224@gmail.com
 *   Organization:  HANGZHOU DIANZI UNIVERSITY
 *
 * =====================================================================================
 */

#include <stdio.h>

int main()
{
	int i, j, k, time = 1;
	printf("The result is:\n");
	printf("time red ball while ball black ball\n");
	for (i = 0; i <= 3; ++i)
		for (j = 0; j <= 3; ++j)
			for (k = 0; k <= 6; ++k)
				if (i + j + k == 8)
					printf("%3d%8d%9d%10d\n", time++, i, j, k);
	return 0;
				
}	
