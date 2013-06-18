/*
 * =====================================================================================
 *
 *       Filename:  044.c
 *
 *    Description:  044
 *
 *        Version:  1.0
 *        Created:  06/09/2013 02:54:21 PM
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
#define MAX 50

int main()
{
	int num, i;
	float height[MAX], ave, sum = 0.0;

	printf("Please input the number of students:\n");
	scanf("%d", &num);

	printf("Please input students's height:\n");
	for (i = 0; i < num; ++i) {
		scanf("%f", &height[i]);
		sum += height[i];
	}
	ave = sum / num;
	printf("average height is %f\n", ave);
	return 0;

}	
