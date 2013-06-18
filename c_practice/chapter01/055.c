/*
 * =====================================================================================
 *
 *       Filename:  055.c
 *
 *    Description:  055
 *
 *        Version:  1.0
 *        Created:  06/09/2013 08:50:38 PM
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
	int sum, x;

	for (x = 1; x <= 5; ++x)
		if (10605 % (28 - 5 * x) == 0)
			break;
	sum = 10605 / (28 - 5 * x);
	printf("Toatal is %d\nA:%d\nB:%d\nc:303\n", sum, sum * 2 / 10, sum * x / 7);
	return 0;
	
}	
