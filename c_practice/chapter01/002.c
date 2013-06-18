/*
 * =====================================================================================
 *
 *       Filename:  002.c
 *
 *    Description:  002
 *
 *        Version:  1.0
 *        Created:  06/05/2013 09:58:54 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhang Dongsheng (mars), zhangdongsheng1224@gmail.com
 *   Organization:  HANGZHOU DIANZI UNIVERSITY
 *
 * =====================================================================================
 */

#include <stdio.h>

int main()
{
	int i, j, m;
	int a[16] = {0};
	printf("Please input the decimalism number(0~2^16-1):\n");
	scanf("%d", &m);

	for (i = 15; i >= 0 && m != 0; --i) {
		j = m % 2;
		a[i] = j;
		m = m / 2;
	}
	
	printf("The result is:\n");
	for (i = 0; i < 16; ++i) {
		printf("%d", a[i]);
		if ((i + 1) % 4 == 0)
			printf(" ");
	
	}
	printf("\n");
	return 0;
}	
