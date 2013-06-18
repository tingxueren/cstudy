/*
 * =====================================================================================
 *
 *       Filename:  060.c
 *
 *    Description:  060
 *
 *        Version:  1.0
 *        Created:  06/13/2013 02:36:15 PM
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


void exchange(int *p1, int *p2, int *p3)
{
	if (*p1 < *p2)
		swap(p1, p2);
	if (*p2 < *p3)
		swap(p2, p3);
	if (*p1 < *p3)
		swap(p1, p3);
}	

int main()
{
	int a, b, c;
	int *p1, *p2, *p3;
	scanf("%d,%d,%d", &a, &b, &c);
	p1 = &a;
	p2 = &b;
	p3 = &c;
	exchange(p1, p2, p3);
	printf("The result is: %d, %d, %d\n", a, b, c);
	return 0;
}	
