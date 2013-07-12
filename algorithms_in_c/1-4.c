/*
 * =====================================================================================
 *
 *       Filename:  1-4.c
 *
 *    Description:  1-4
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
	int i, j, p, q, id[N], sz[N];
	for (i = 0; i < N; ++i) {
		id[i] = i;
		sz[i] = 1;
	}
	while (scanf("%d %d\n", &p, &q) == 2) {
		for (i = p; i != id[i]; i = id[i])
			// 指向根的根，进行树的压缩
			id[i] = id[id[i]];
		for (j = q; j != id[j]; j = id[j]);
			id[j] = id[id[j]];
		if (i == j) continue;
		if (sz[i] < sz[j]) {
			// 将 i 为根的树挂在以 j 为根的节点上
			id[i] = j;
			sz[j] += sz[i];
		} else {
			id[j] = i;
			sz[i] += sz[j];
		}
		printf("\t%d %d\n", p, q);
	}                                                                            
	return 0;

}	
