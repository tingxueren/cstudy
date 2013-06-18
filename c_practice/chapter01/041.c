/*
 * =====================================================================================
 *
 *       Filename:  041.c
 *
 *    Description:  041
 *
 *        Version:  1.0
 *        Created:  06/09/2013 02:14:43 PM
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
#define MAX 50

int main()
{
	char a[MAX], b[MAX], c[MAX];
	int post;

	printf("Please input str1:\n");
	// gets  一行
	// scanf 字符串
	gets(a);
	printf("Please input str2:\n");
	gets(b);
	printf("Please input position:\n");
	scanf("%d", &post);

	strncpy(c, a, post);
	strcat(c, b);
	strcat(c, " ");
	strcat(c, a + post);
	printf("%s\n", c);
	return 0;

}	


