/*
 * =====================================================================================
 *
 *       Filename:  074.c
 *
 *    Description:  074
 *
 *        Version:  1.0
 *        Created:  06/17/2013 07:37:49 PM
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

void copy (char *s, char *q) 
{
	while (*s != '\0') {
		*q++ = *s++;
	}
	*q = '\0';
}	

int main()
{
	char a[] = "hello, world";
	char b[20];
	// *b 未分配空间，段错误
	//char *b;
	copy(a, b);
	printf("%s\n", b);
	return 0;
}	
