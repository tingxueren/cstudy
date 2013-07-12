/*
 * =====================================================================================
 *
 *       Filename:  3-9.c
 *
 *    Description:  3-9
 *
 *        Version:  1.0
 *        Created:  Thursday 04 July 2013 10:17:24  CST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhang Dongsheng (mars), zhangdongsheng1224@gmail.com
 *   Organization:  HANGZHOU DIANZI UNIVERSITY
 *
 * =====================================================================================
 */


#include <errno.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct node* link;
struct node {int item; link next;};

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  main function
 * =====================================================================================
 */
int main(int argc, char *argv[])
{

	int i, N = atoi(argv[1]), M = atoi(argv[2]);
	link t = malloc(sizeof(*t)), x = t;
	t->item = 1; t->next = t;
	for (i = 2; i <= N; ++i) {
		// x 一直指向当前链表的最后一个节点
		// 生成新的节点，并连接在x的后面
		// 比通常的少用了一个变量
		x = (x->next = malloc(sizeof(*x)));
		x->item = i; x->next = t;
	}
	while (x != x->next) {
		for (i = 1; i < M; ++i)
			x = x->next;
		x->next = x->next->next; N--;
		
	}
	printf("%d\n", x->item);
	printf("\nProgram %s\n\n", argv[0]);

	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
