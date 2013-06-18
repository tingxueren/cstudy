/*
 * =====================================================================================
 *
 *       Filename:  021.c
 *
 *    Description:  021
 *
 *        Version:  1.0
 *        Created:  06/06/2013 08:49:51 PM
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
	int x, y, z;
	for (x = 1; x <= 4; ++x) {
		for (y = 1; y <= 4; ++y) {
			for (z = 0; z <= 9; ++z)
				if (100 * (x + y) + 10 * (y + z) + 2 * z == 532)
					printf("x = %d, y = %d, z = %d\n", x, y, z);
		}
	}
	return 0;
}	
