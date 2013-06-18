/*
 * =====================================================================================
 *
 *       Filename:  047.c
 *
 *    Description:  047
 *
 *        Version:  1.0
 *        Created:  06/09/2013 03:40:28 PM
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
	int i;
	float h = 100, s = 100;
	for (i = 1; i <= 9; ++i) {
		h = h / 2;
		s += h * 2;
	}

	printf("the total length is %f\n", s);
	printf("the height of tenth time is %f\n", h / 2);
	return 0;
}	
