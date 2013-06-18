/*
 * =====================================================================================
 *
 *       Filename:  084.c
 *
 *    Description:  084
 *
 *        Version:  1.0
 *        Created:  06/18/2013 08:14:02 PM
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
#define N 5

int main()
{
	struct order
	{
		int num;
		int con;
	} a[N];
	int i,j;
	for (i = 0; i < N; ++i) {
		scanf("%d", &a[i].num);
		a[i].con = 0;
	}
	printf("The order is:\n");
	for (i = 0; i < N; ++i) {
		for (j = 0; j < N; ++j)
			if (a[i].num > a[j].num)
				a[i].con++;
	}
	for (i = 0; i < N; ++i)
		printf("%d\t%d\n", a[i].num, a[i].con);
	return 0;
}	

