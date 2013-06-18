/*
 * =====================================================================================
 *
 *       Filename:  076.c
 *
 *    Description:  076
 *
 *        Version:  1.0
 *        Created:  06/17/2013 07:52:40 PM
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
#define MAX 20

void insert(char *str, char *s, char *t, int num)
{
	int i;
	for (i = 0; i < num - 1; ++i)
		*str++ = *s++;
	while (*t != '\0')
		*str++ = *t++;
	while (*s != '\0')
		*str++ = *s++;
	*str = '\0';
}	

int main()
{
	char str1[MAX] = "hello world!";
	char str2[MAX] = "big ";
	char str3[2 * MAX];
	int num;
	printf("The original string: %s\n", str1);
	printf("Please input the position you want to insert: ");
	scanf("%d", &num);
	insert(str3, str1, str2, num);
	printf("\nThe result is %s\n", str3);
	return 0;
}	
