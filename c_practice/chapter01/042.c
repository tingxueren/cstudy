/*
 * =====================================================================================
 *
 *       Filename:  042.c
 *
 *    Description:  042
 *
 *        Version:  1.0
 *        Created:  06/09/2013 02:44:58 PM
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

int max(int x, int y)
{
	return (x > y) ? x : y;
}	

int main()
{
	int a, b;
	printf("Please enter two nums:\n");
	scanf("%d%d", &a, &b);
	printf("max is %d\n", max(a, b));
	return 0;
}	
