/*
 * =====================================================================================
 *
 *       Filename:  033.c
 *
 *    Description:  033
 *
 *        Version:  1.0
 *        Created:  06/07/2013 08:28:03 PM
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
	int i, j, x = 1, y = 3, a[6][6] = {0};

	for (i = 1; i <= 25; i++) {
		a[x][y] = i;
		if (x == 1 && y == 5) {
			x = x + 1;
			continue;
		}
		if (x == 1)
			x = 5;
		else
			x--;
		if (y == 5)
			y = 1;
		else
			y++;
		if (a[x][y] != 0) {
			x = x + 2;
			y = y - 1;
		}
	}
	for (i = 1; i <= 5; ++i) {
		for (j = 1; j <= 5; ++j)
			printf("%4d", a[i][j]);
		printf("\n");
	}
	return 0;
}	
