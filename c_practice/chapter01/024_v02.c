/*
 * =====================================================================================
 *
 *       Filename:  024.c
 *
 *    Description:  024
 *
 *        Version:  1.0
 *        Created:  06/06/2013 09:37:07 PM
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
	int num, re_num, i, j;
	printf("Please enter an integer: ");
	scanf("%d", &num);
	re_num = (num % 10) * 10 + num / 10;
	for (i = 1; i <= 9; ++i)
		for (j = 1; j <= 9; ++j)
			if (num + 10 * i + j == re_num + 10 * j + i)
				printf("%d + %d = %d + %d\n", num, 10 * i + j, re_num, 10 * j + i);
	
	return 0;
}	
