/*
 * =====================================================================================
 *
 *       Filename:  049.c
 *
 *    Description:  049
 *
 *        Version:  1.0
 *        Created:  06/09/2013 04:49:42 PM
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
	int day = 8;
	float ave, sum;
	
	while (day) {
		sum = pow(2, day + 1) - 2;
		if (sum <= 100)
			break;
		day--;
	}
	printf("sum = %f, day = %d\n", sum, day);
	ave = sum * 0.8 / day;
	printf("The result is %f\n", ave);
	return 0;
	
}	
