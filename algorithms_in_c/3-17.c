/*
 * =====================================================================================
 *
 *       Filename:  3-17.c
 *
 *    Description:  3-17
 *
 *        Version:  1.0
 *        Created:  Thursday 04 July 2013 09:52:23  CST
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
#define Nmax 1000
#define Mmax 10000
char buf[Mmax];
int M = 0;

int mycompare(void *i, void *j)
{
	return strcmp(*(char **)i, *(char **)j);
}	

int main()
{
	int i, N;
	char *a[Nmax];
	for (N = 0; N < Nmax; ++N) {
		a[N] = &buf[M];
		if (scanf("%s", a[N]) == EOF) 
			break;
		M += strlen(a[N]) + 1;

	}
	qsort(a, N, sizeof(char *), mycompare);
	for (i = 0; i < N; i++)
		printf("%s\n", a[i]);
	return 0;
}	
