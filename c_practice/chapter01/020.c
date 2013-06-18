/*
 * =====================================================================================
 *
 *       Filename:  020.c
 *
 *    Description:  020
 *
 *        Version:  1.0
 *        Created:  06/06/2013 08:43:07 PM
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
	float a[11];
	int i, n;
	a[0] = a[1] = 1.0;
	for (i = 2; i < 11; ++i)
		a[i] = a[i-1] * i;
	printf("please enter a num(num < 10):");
	scanf("%d", &n);
	printf("%d! = %f\n", n, a[n]);
	return 0;
}	
