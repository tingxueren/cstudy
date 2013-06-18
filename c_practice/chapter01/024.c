/*
 * =====================================================================================
 *
 *       Filename:  024.c
 *
 *    Description:  024
 *
 *        Version:  1.0
 *        Created:  06/06/2013 09:37:07 PM
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
	int i, j, k, l;
	for (i = 1; i <= 9; ++i)
		for (j = 1; j <= 9; ++j)
			for (k = 1; k <= 9; ++k)
				for (l = 1; l <= 9; ++l)
					if ((10 * (i + k) + j + l) == (10 * (j + l) + i + k))
						printf("%d + %d = %d + %d\n", 10 * i + j, 10 * k + l, 10 * j + i, 10 * l + k);
	return 0;
}	
