/*
 * =====================================================================================
 *
 *       Filename:  3-15.c
 *
 *    Description:  3-15
 *
 *        Version:  1.0
 *        Created:  Thursday 04 July 2013 05:27:13  CST
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
#define N 1000

int main(int argc, char *argv[])
{
	int i, j, t;
	char a[N], *p = argv[1];
	for (i = 0; i < N - 1; a[i] = t, i++)
		if ((t = getchar()) == '#') break;
	a[i] = 0; // a[i] = '\0'
	for (i = 0; a[i] != 0; i++) {
		for (j = 0; p[j] != 0; j++)
			if (a[i + j] != p[j]) break;
		if (p[j] == 0) 
			printf("%d\n", i);
	}
	return 0;

}	
