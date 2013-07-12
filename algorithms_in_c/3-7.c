/*
 * =====================================================================================
 *
 *       Filename:  3-7.c
 *
 *    Description:  3-7
 *
 *        Version:  1.0
 *        Created:  Thursday 04 July 2013 09:20:35  CST
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

int heads()
{
	return rand() < RAND_MAX / 2;
}	

int main(int argc, char *argv[])
{
	int i, j, cnt;
	int N = atoi(argv[1]), M = atoi(argv[2]);
	int *f = (int *)malloc((N + 1) * sizeof(int));
	for (j = 0; j <= N; j++) 
		f[j] = 0;
	for (i = 0; i < M; i++, f[cnt]++)
		// 总共做 M 次实验，每次抛 N 次硬币
		// cnt 代表 N 次中 heads 的次数
		// 上层循环中，f[cnt]++,即统计 heads 为 cnt 
		// 次数 + 1；每次下层循环中 cnt 初始化为 0
		for (cnt = 0, j = 0; j <= N; j++)
			if (heads()) cnt++;
	for (j = 0; j <= N; j++) {
		printf("%2d ", j);
		for (i = 0; i < f[j]; i += 10)
			printf("*");
		printf("\n");
	}
	return 0;
}	
