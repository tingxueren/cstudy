/*
 * =====================================================================================
 *
 *       Filename:  005.c
 *
 *    Description:  005
 *
 *        Version:  1.0
 *        Created:  06/06/2013 12:00:14 PM
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
	int value;
	printf("Please input a int num:\n");
	scanf("%d", &value);
	if (value % 2)
		printf("%d is odd num.\n", value);
	else
		printf("%d is even num.\n", value);
	return 0;
}	
