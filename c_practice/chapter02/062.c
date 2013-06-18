/*
 * =====================================================================================
 *
 *       Filename:  062.c
 *
 *    Description:  062
 *
 *        Version:  1.0
 *        Created:  06/13/2013 07:37:34 PM
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
#define MAX 20

int main()
{
	int input[MAX];
	int i, *p;
	printf("Please input ten numbers:\n");
	for (i = 0; i < 10; ++i)
		scanf("%d", &input[i]);
	p = input;

	for (i = 0; i < 10; ++i)
		printf("%d ", *(p + i));
	printf("\n");
	return 0;
}	
