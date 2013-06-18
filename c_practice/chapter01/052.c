/*
 * =====================================================================================
 *
 *       Filename:  052.c
 *
 *    Description:  052
 *
 *        Version:  1.0
 *        Created:  06/09/2013 08:11:35 PM
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
#include <math.h>

int main()
{
	// num 初始化很重要
	int num[10] = {0};
	long n, n3, n4;
	int i, flag;

	for (n = 18; n <= 21; ++n) {
		flag = 1;
		n3 = n * n * n;
		n4 = n3 * n;
		//printf("n3 = %lld, n4 = %lld\n", n3, n4);
		while (n3) {
			num[n3 % 10]++;
			n3 /= 10;
		}
		while (n4) {
			num[n4 % 10]++;
			n4 /= 10;
		}
		//printf("now age is %d\n", n);
		//for (i = 0; i < 10; ++i)
		//	printf("num[%d] = %lld\n", i,num[i]);
		for (i = 0; i < 10; ++i)
			if (num[i] != 1)
				flag = 0;
		if (flag) {
			printf("The age is %ld\n", n);
			break;
		}

	}
	return 0;
}	
