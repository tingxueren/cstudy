/*
 * =====================================================================================
 *
 *       Filename:  1-2.c
 *
 *    Description:  1-2
 *
 *        Version:  1.0
 *        Created:  Wednesday 03 July 2013 07:35:29  CST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhang Dongsheng (mars), zhangdongsheng1224@gmail.com
 *   Organization:  HANGZHOU DIANZI UNIVERSITY
 *
 * =====================================================================================
 */

#include <stdio.h>
#define N 10000

int main()
{
	int i, j, p, q, id[N];
	for (i = 0; i < N; ++i)
		id[i] = i;
	while (scanf("%d %d\n", &p, &q) == 2) {
		for (i = p; i != id[i]; i = id[i]);
		for (j = q; j != id[j]; j = id[j]);
		if (i == j) continue;
		id[i] = j;
		printf("\t%d %d\n", p, q);
	}                                                                            
	return 0;

}	
