/*
 * =====================================================================================
 *
 *       Filename:  014.c
 *
 *    Description:  014
 *
 *        Version:  1.0
 *        Created:  06/06/2013 04:53:51 PM
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
	int i, j;
	char *pattern = "*****";
	for (i = 0; i < 5; ++i) {
		for (j = 0; j < i; ++j)
			printf(" ");
		printf("%s\n", pattern);
	}
	return 0;
}	
