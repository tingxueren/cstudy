/*
 * =====================================================================================
 *
 *       Filename:  3-6.c
 *
 *    Description:  3-6
 *
 *        Version:  1.0
 *        Created:  Wednesday 03 July 2013 10:14:23  CST
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

int main(int argc, char *argv[])
{
	int i, j, N = atoi(argv[1]);
	int *a = (int *)malloc(sizeof(int) * (N + 1));
	if (a == NULL) {
		printf("Insufficient memory.\n");
		exit(-1);
	}
		
	for (i = 2; i <= N; ++i) 
		a[i] = 1;
	for (i = 2; i <= N; ++i)
		if (a[i])
			for (j = i; j <= N / i; ++j)
				a[i * j] = 0;
	// 上述的写法对 a[N - 1] 未考虑完全，需要重新考虑
	// 多分配一个节点，考虑到 a[N] 即可
	// printf("a[%d] = %d\n", N - 1, a[N - 1]);
	j = 0;
	for (i = 2; i <= N; ++i) {
		if (a[i]) {
			printf("%d\t", i);
			j++;
			if (j % 10 == 0)
				printf("\n");
		} 
		
		//if (j % 10 == 0) {
		//	printf("\n");
		//	j = 0;
		//
		//}
	}
	printf("\n");
	return 0;
		
}	
