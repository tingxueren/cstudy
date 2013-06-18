/*
 * =====================================================================================
 *
 *       Filename:  006.c
 *
 *    Description:  006
 *
 *        Version:  1.0
 *        Created:  06/06/2013 12:04:36 PM
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
	int a, b;
	printf ("Please input two int num:\n");
	scanf("%d %d", &a, &b);
	if (a * a + b * b > 100)
		printf("a^2 + b^2 = %d\n", a * a + b * b);
	else
		printf("a + b = %d\n", a + b);
	return 0;
}	
