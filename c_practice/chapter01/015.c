/*
 * =====================================================================================
 *
 *       Filename:  015.c
 *
 *    Description:  015
 *
 *        Version:  1.0
 *        Created:  06/06/2013 04:59:18 PM
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
#include <math.h>

int main()
{
	double y;
	int x, m;
	for (y = 1.0; y >= -1.0; y = y - 0.1) {
		m = acos(y) * 10;
		for (x = 1; x < m; ++x)
			printf(" ");
		printf("*");
		for (; x < 62 - m; ++x)
			printf(" ");
		printf("*\n");
	}
	return 0;
}	
