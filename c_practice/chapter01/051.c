/*
 * =====================================================================================
 *
 *       Filename:  051.c
 *
 *    Description:  051
 *
 *        Version:  1.0
 *        Created:  06/09/2013 05:30:21 PM
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
	int n; 
	float sum1, sum2;
	for (n = 11; ; ++n) {
		sum1 = (n + 9) / 10.0;
		sum2 = (9 * n + 171) / 100.0;
		if (sum1 != (int)sum1) continue;
		if (sum2 != (int)sum2) continue;
		if (sum1 == sum2) break;
	}
	printf("The number of students is %d\nThe peaces is %d\n", (int)(n / sum1), n);
	return 0;
}	
