/*
 * =====================================================================================
 *
 *       Filename:  043.c
 *
 *    Description:  043
 *
 *        Version:  1.0
 *        Created:  06/09/2013 02:48:47 PM
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

int age(int n)
{
	int f;
	if (n == 1)
		f = 10;
	else 
		f = age(n - 1) + 2;
	return f;
}	

int main()
{
	int i;
	printf("Do you want to know whose age? Please input :\n");
	scanf("%d", &i);
	printf("The age is %d\n", age(i));
	return 0;
}	
