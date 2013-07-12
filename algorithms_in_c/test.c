/*
 * =====================================================================================
 *
 *       Filename:  test.c
 *
 *    Description:  test
 *
 *        Version:  1.0
 *        Created:  Thursday 04 July 2013 08:56:43  CST
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
#include <string.h>

int main()
{
	int i, a[10];
	memset(a, 1, sizeof(int) * 10);
	printf("sizeof(a) = %d\n", sizeof(a));
	for (i = 0; i < 10; ++i)
		printf("%d\n", a[i]);

	return 0;
}	
