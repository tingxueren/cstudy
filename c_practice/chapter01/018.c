/*
 * =====================================================================================
 *
 *       Filename:  018.c
 *
 *    Description:  018
 *
 *        Version:  1.0
 *        Created:  06/06/2013 08:21:02 PM
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
	int i, n;
	float sum = 0.0;
	printf("Please enter num:");
	scanf("%d", &n);
	for (i = 1; i <= n; ++i) 
		sum += 1.0 / i;
	printf("sum = %5.2f\n", sum);
	return 0;
}	
