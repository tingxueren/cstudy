/*
 * =====================================================================================
 *
 *       Filename:  059.c
 *
 *    Description:  059
 *
 *        Version:  1.0
 *        Created:  06/13/2013 02:14:33 PM
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

void swap(int *p1, int *p2)
{
	int tmp;
	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}	

int main()
{
	int a, b;
	int *point1, *point2;
	scanf("%d,%d", &a, &b);
	point1 = &a;
	point2 = &b;
	swap(point1, point2);
	printf("The result is %d, %d\n", *point1, *point2);
	return 0;
}	
