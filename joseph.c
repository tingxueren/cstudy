/*
 * =====================================================================================
 *
 *       Filename:  joseph.c
 *
 *    Description:  joseph
 *
 *        Version:  1.0
 *        Created:  Wednesday 26 June 2013 04:56:04  CST
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
	// n 个人，间隔 m 枪毙， s 为幸存者编号
	int m, n, i, s;
	
	printf("please input the number of perople: ");
	scanf("%d", &n);
	printf("please input the number of step: ");
	scanf("%d", &m);
	for (i = 2; i <= n; ++i) {
		s = (s + m) % i;
	}
	printf("The winner is %d\n", s + 1);
	return 0;
}	
