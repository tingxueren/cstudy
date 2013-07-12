/*
 * =====================================================================================
 *
 *       Filename:  1-1.c
 *
 *    Description:  1-1
 *
 *        Version:  1.0
 *        Created:  Wednesday 03 July 2013 05:08:07  CST
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
	int i, p, q, t, id[N];
	for (i = 0; i < N; ++i)
		id[i] = i;
	while (scanf("%d %d\n", &p, &q) == 2) {
		if (id[p] == id[q]) continue;
		for (t = id[p], i = 0; i < N; ++i) {
			if (id[i] == t) id[i] = id[q];
		}
		printf("\t%d %d\n", p, q);
	}
	return 0;
}	
