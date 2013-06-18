/*
 * =====================================================================================
 *
 *       Filename:  035.c
 *
 *    Description:  035
 *
 *        Version:  1.0
 *        Created:  06/07/2013 09:29:58 PM
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

void convert(char a[])
{
	int i, len;
	char tmp;
	len = strlen(a);
	for (i = 0; i < len / 2; ++i) {
		tmp = a[i];
		a[i] = a[len - 1 - i];
		a[len - 1 - i]  = tmp;
	}
	
}

int main()
{
	char cString[MAX];
	printf("Please enter a string:\n");
	gets(cString);
	printf("Origin str:\n%s\n", cString);
	convert(cString);
	printf("converted string:\n%s\n", cString);
	return 0;

}	
