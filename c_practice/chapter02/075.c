/*
 * =====================================================================================
 *
 *       Filename:  075.c
 *
 *    Description:  075
 *
 *        Version:  1.0
 *        Created:  06/17/2013 07:44:47 PM
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

void connect(char *s1, char *s2, char *p)
{
	while (*s1 != '\0')
		*p++ = *s1++;
	*p++ = ' ';
	while (*s2 != '\0')
		*p++ = *s2++;
	*p = '\0';
}	

int main()
{
	char str1[MAX] = "One world";
	char str2[MAX] = "One dream";
	char str3[2 * MAX];
	printf("The first string is: %s\n", str1);
	printf("The second string is: %s\n", str2);
	connect(str1, str2, str3);
	printf("The connected string is: \n%s\n", str3);
	return 0;
}	
