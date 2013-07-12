/*
 * =====================================================================================
 *
 *       Filename:  3-10.c
 *
 *    Description:  3-10
 *
 *        Version:  1.0
 *        Created:  Thursday 04 July 2013 10:39:37  CST
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
#define N 20

link reverse(link x)
{
	link t, y = x, r = NULL;
	while (y != NULL) {
	
		t = y->next;
		y->next = r;
		r = y;
		y = t;
	}
	return r;
}	

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  main function
 * =====================================================================================
 */
int main(int argc, char *argv[])
{
	link list, x;
	int i;
	list = malloc(sizeof(*list));
	list->item = 1;
	list->next = NULL;
	x = list;

	for (i = 2; i <= N; ++i) {
		x = (x->next = malloc(sizeof(*x)));
		x->item = i;
		x->next = NULL;
	}
	x = list;
	while (x != NULL) {
		printf("%d ", x->item);
		x = x->next;
	}
	printf("\n");
	x = reverse(list);
	while (x != NULL) {
		printf("%d ", x->item);
		x = x->next;
	}
	printf("\n");

	printf("\nProgram %s\n\n", argv[0]);

	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
