/*
 * =====================================================================================
 *
 *       Filename:  027.c
 *
 *    Description:  027
 *
 *        Version:  1.0
 *        Created:  06/07/2013 09:00:39 AM
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
	int a[10], b[9];
	int i;
	
	printf("Please input 10 numbers:\n");
	for (i = 0; i < 10; ++i)
		scanf("%d", &a[i]);
	for (i = 0; i < 9; ++i) {
		b[i] = a[i] + a[i+1];
		printf("%d\t", b[i]);
		if ((i + 1) % 3 == 0)
			printf("\n");
	
	}
	return 0;
	
}	
