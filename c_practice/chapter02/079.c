/*
 * =====================================================================================
 *
 *       Filename:  079.c
 *
 *    Description:  079
 *
 *        Version:  1.0
 *        Created:  06/18/2013 07:19:53 PM
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
	char *month[] = {
		"January",
		"February",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"September",
		"October",
		"November",
		"December"
	};
	int i;
	char **p = month;
	printf("Please input a number for month:\n");
	scanf("%d", &i);
	printf("The month is %s\n", *(p + i - 1));
	return 0;
}	
