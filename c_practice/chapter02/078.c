/*
 * =====================================================================================
 *
 *       Filename:  078.c
 *
 *    Description:  078
 *
 *        Version:  1.0
 *        Created:  06/18/2013 07:16:50 PM
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
	char *string[] = {
		"C language",
		"Basic",
		"World wide",
		"Olympic",
		"Great Wall"
	};
	char **p, i;
	p = string;
	for (i = 0; i < 5; ++i)
		printf("%s\n", *(p + i));
	return 0;
}	
