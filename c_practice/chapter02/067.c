/*
 * =====================================================================================
 *
 *       Filename:  067.c
 *
 *    Description:  067
 *
 *        Version:  1.0
 *        Created:  06/13/2013 08:33:28 PM
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
#include <string.h>

int main()
{
	char *Week[] = {
		"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"
	};
	
	int i;
	printf("Please input a number for week\n");
	scanf("%d", &i);
	printf("The week is %s\n", Week[i - 1]);
	return 0;

}	

