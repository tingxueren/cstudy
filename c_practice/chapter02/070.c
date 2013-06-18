/*
 * =====================================================================================
 *
 *       Filename:  070.c
 *
 *    Description:  070
 *
 *        Version:  1.0
 *        Created:  06/14/2013 09:14:30 PM
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

int *FindMax(int *p, int n)
{
	int i, *max;
	max = p;
	for (i = 1; i < n; ++i)
		if (*(p + i) > *max)
			max = p + i;
	return max;
}	

int main()
{
	int a[10], *max, i;
	printf("Please input ten integer:\n");
	for (i = 0; i < 10; ++i)
		scanf("%d", &a[i]);
	max = FindMax(a, 10);
	printf("The max is %d\n", *max);
	return 0;
}	
