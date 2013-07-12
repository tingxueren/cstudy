/*
 * =====================================================================================
 *
 *       Filename:  3-11.c
 *
 *    Description:  3-11
 *
 *        Version:  1.0
 *        Created:  Thursday 04 July 2013 11:09:41  CST
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
#define N 10
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
	struct node heada, headb;
	link t, x, u, a = &heada, b;
	int i;
	for (i = 0, t = a; i < N; ++i) {
		t = (t->next = malloc(sizeof(*t)));
		t->item = rand() % 1000;
		t->next = NULL;
	}
	for (t = a->next; t != NULL; t = t->next) {
		printf("%d ", t->item);
	}	
	printf("\n");

	b = &headb; b->next = NULL;
	for (t = a->next; t != NULL; t = u) {
		// 用 u 保存 t->next, t 下面会变化
		u = t->next;
		for (x = b; x->next != NULL; x = x->next)
			if (x->next->item > t->item) break;
		t->next = x->next;
		x->next = t;
	}
	for (t = b->next; t != NULL; t = t->next) {
		printf("%d ", t->item);
	}	
	printf("\n");
	for (t = a->next; t != NULL; t = t->next) {
		printf("%d ", t->item);
	}	
	printf("\n");

	
	printf("\nProgram %s\n\n", argv[0]);

	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
