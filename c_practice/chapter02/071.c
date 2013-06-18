/*
 * =====================================================================================
 *
 *       Filename:  071.c
 *
 *    Description:  071
 *
 *        Version:  1.0
 *        Created:  06/14/2013 09:40:26 PM
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
	float score[][4] = {{60, 75, 82, 91}, {75, 81, 92, 90}, {51, 65, 78, 84}, {65, 92, 78, 72}};
	float *p;
	int i;
	printf("Enter the student's number you want to search:\n");
	scanf("%d", &i);
	p = score + i;
	printf("This student's scores ars:\n");
	for (i = 0; i < 4; ++i)
		printf("%.2f\t", *(p + i));
	printf("\n");
	return 0;
}	
