/*
 * =====================================================================================
 *
 *       Filename:  019.c
 *
 *    Description:  019
 *
 *        Version:  1.0
 *        Created:  06/06/2013 08:27:39 PM
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
	int a[22];
	int i;
	float sum = 0.0;
	a[0] = a[1] = 1;
	for (i = 2; i < 22; ++i)
		a[i] = a[i-1] + a[i-2];
	for (i = 1; i <= 20; ++i)
		sum += (a[i+1] + 0.0) / a[i];
	printf("sum = %f\n", sum);
	return 0;
}	
