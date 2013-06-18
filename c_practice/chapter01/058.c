/*
 * =====================================================================================
 *
 *       Filename:  058.c
 *
 *    Description:  058
 *
 *        Version:  1.0
 *        Created:  06/09/2013 09:43:23 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhang Dongsheng (mars), zhangdongsheng1224@gmail.com
 *   Organization:  HANGZHOU DIANZI UNIVERSITY
 *
 * =====================================================================================
 */

#include <stdio.h>

unsigned right(unsigned value, int n)
{
	unsigned z;
	z = (value >> n) | (value << (16 - n));
	return z;
}	

unsigned left(unsigned value, int n)
{
	unsigned z;
	z = (value >> (16 - n)) | (value << n);
	return z;
}	

int main()
{
	unsigned a;
	int n; 
	printf("please input a number:\n");
	scanf("%o", &a);
	printf("please input the number of displacement:\n");
	scanf("%d", &n);

	if (n > 0) {
		right(a, n);
		printf("The result is: %o\n", right(a, n));
	}
	else {
		n = -n;
		left(a, n);
		printf("The result is: %o\n", left(a, n));

	}
	return 0;
}	
