/*
 * =====================================================================================
 *
 *       Filename:  008.c
 *
 *    Description:  008
 *
 *        Version:  1.0
 *        Created:  06/06/2013 12:25:18 PM
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
	int year;
	printf("Please input the year:");
	scanf("%d", &year);
	if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
		printf("%d year is leap year\n", year);
	else
		printf("%d year is no leap year\n", year);
	return 0;
}	
