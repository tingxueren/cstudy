/*
 * =====================================================================================
 *
 *       Filename:  069.c
 *
 *    Description:  069
 *
 *        Version:  1.0
 *        Created:  06/14/2013 08:55:26 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhang Dongsheng (mars), zhangdongsheng1224@gmail.com
 *   Organization:  HANGZHOU DIANZI UNIVERSITY
 *
 * =====================================================================================
 */

#include <stdio.h>

int min(int a, int b)
{
	return (a < b) ? a : b;
}	

int main()
{
	int (*pmin)();
	int a, b, m;
	pmin = min;
	printf("Please input two integer numbers:\n");
	scanf("%d%d", &a, &b);
	m = (*pmin)(a, b);
	printf("min = %d\n", m);
	return 0;
}	
