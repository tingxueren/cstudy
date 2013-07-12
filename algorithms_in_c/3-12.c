/*
 * =====================================================================================
 *
 *       Filename:  3-13.c
 *
 *    Description:  3-13
 *
 *        Version:  1.0
 *        Created:  Thursday 04 July 2013 04:47:43  CST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhang Dongsheng (mars), zhangdongsheng1224@gmail.com
 *   Organization:  HANGZHOU DIANZI UNIVERSITY
 *
 * =====================================================================================
 */

#include "list.h"

int main(int argc, char *argv[])
{
	int i, N = atoi(argv[1]), M = atoi(argv[2]);
	Node t, x;
	initNode(N);
	for (i = 2, x = newNode(1); i <= N; ++i) {
		t = newNode(1);
		insertNext(x, t);
		x = t;
	}
	while (x != Next(x)) {
		for (i = 1; i < M; i++)
			x = Next(x);
		freeNode(deleteNext(x));
	}
	printf("%d\n", Item(x));
}	
