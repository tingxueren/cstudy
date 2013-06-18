/*
 * =====================================================================================
 *
 *       Filename:  040.c
 *
 *    Description:  040
 *
 *        Version:  1.0
 *        Created:  06/09/2013 11:44:34 AM
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
	char a[MAX], b[MAX], c[2 * MAX];
	int i = 0, j = 0, k = 0;
	printf("Please input string a:\n");
	gets(a);
	printf("Please input string b:\n");
	gets(b);
	
	while (a[i] && b[j]) {
		if (a[i] < b[j])
			c[k++] = a[i++];
		else if (a[i] > b[j])
			c[k++] = b[j++];
		else {
			c[k++] = a[i++];
			c[k++] = b[j++];
		}

	}

	if (a[i] == '\0') {
		while (b[j])
			c[k++] = b[j++];
		c[k] = '\0';
	} else if (b[j] == '\0') {
		while (a[i])
			c[k++] = a[i++];
		c[k] = '\0';
	
	}
	printf("The c string is %s\n", c);
	return 0;
}	
