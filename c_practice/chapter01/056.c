/*
 * =====================================================================================
 *
 *       Filename:  056.c
 *
 *    Description:  056
 *
 *        Version:  1.0
 *        Created:  06/09/2013 09:05:24 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhang Dongsheng (mars), zhangdongsheng1224@gmail.com
 *   Organization:  HANGZHOU DIANZI UNIVERSITY
 *
 * =====================================================================================
 */

#include <stdio.h>
#define swap(a,b) {int c; c = a; a = b; b = c;}

int main()
{
	int i, a[10], b[10];
	
	printf("Please input array a:\n");
	for (i = 0; i < 10; ++i)
		scanf("%d", &a[i]);
	
	printf("Please input array b:\n");
	for (i = 0; i < 10; ++i)
		scanf("%d", &b[i]);
	
	printf("\nThe array a is:\n");
	for (i = 0; i < 10; ++i)
		printf("%d, ", a[i]);
	printf("\nThe array b is:\n");
	for (i = 0; i < 10; ++i)
		printf("%d, ", b[i]);

	
	for (i = 0; i < 10; ++i)
		swap(a[i], b[i]);
	printf("\nNow the array a is:\n");
	for (i = 0; i < 10; ++i)
		printf("%d, ", a[i]);
	printf("\nNow the array b is:\n");
	for (i = 0; i < 10; ++i)
		printf("%d, ", b[i]);
	printf("\n");
	return 0;

}
