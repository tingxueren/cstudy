/*
 * =====================================================================================
 *
 *       Filename:  026.c
 *
 *    Description:  026
 *
 *        Version:  1.0
 *        Created:  06/07/2013 08:51:58 AM
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
	int i, tmp, a[5];
	printf("Please input array a:\n");
	for (i = 0; i < 5; ++i)
		scanf("%d", &a[i]);
	printf("Array a:\n");
	for (i = 0; i < 5; ++i)
		printf("%d ", a[i]);
	printf("\n");
	printf("New array a:\n");
	for (i = 0; i < 5 / 2; ++i) {
		tmp = a[i];
		a[i] = a[4-i];
		a[4-i] = tmp;
		
	}
	for (i = 0; i < 5; ++i)
		printf("%d ", a[i]);
	printf("\n");
	return 0;
	
}	
