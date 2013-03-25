/*
 * =====================================================================================
 *
 *       Filename:  1-3.c
 *
 *    Description:  1-3
 *
 *        Version:  1.0
 *        Created:  03/19/2013 07:17:45 PM
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

typedef int ElemType;

typedef struct node {
	ElemType data;
	struct node *next;
}LNode, *LinkList;

LinkList GreatLinkList(int n)
{
	LinkList p, r, list = NULL;
	ElemType e;
	int i;
	for (i = 1; i <= n; i++) {
		scanf("%d", &e);
		p = (LinkList)malloc(sizeof(LNode));
		p->data = e;
		p->next = NULL;
		if (!list)
			list = p;
		else
			r->next = p;
		r = p;
	}
	return list;
}	

void insertList(LinkList *list, LinkList q, ElemType e)
{
	LinkList p;
	p = (LinkList)malloc(sizeof(LNode));
	p->data = e;
	// LinkList *list, list 双重指针
	if (!*list) {
		*list = p;
		p->next = NULL;
	
	} else {
		p->next = q->next;
		q->next = p;
	}
}	

void delLink(LinkList *list, LinkList q)
{
	LinkList r;
	if (q == *list) {
		*list = q->next;
		free(q);
	
	} else {
		// 一直向下走到q
		for (r = *list; r->next != q; r = r->next);
			if (r->next != NULL) {
				r->next = q->next;
				free(q);
			
			}
	}
}	

void destoryLinkList(LinkList *list)
{
	LinkList p, q;
	p = *list;
	while (p) {
		q = p->next;
		free(p);
		p = q;
	
	}
	*list = NULL;

}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  main function
 * =====================================================================================
 */
int main(int argc, char *argv[])
{
	int e,i;
	int j = 1;
	LinkList l,q;
	q = l = GreatLinkList(j);

	scanf("%d", &e);
	while (e) {
		insertList(&l, q, e);
		q = q->next;
		scanf("%d", &e);
	}

	q = l;
	printf("The content of the linklist\n");
	while (q) {
		printf("%d ", q->data);
		q = q->next;
	
	}

	q = l;
	printf("\nDelete the fifth element\n");
	for (i = 0; i < 4; i++) {
		q = q->next;
	
	}
	printf("q->data = %d\n", q->data);
	delLink(&l, q);
	q = l;
	while (q) {
		printf("%d ", q->data);
		q = q->next;
	}

	destoryLinkList(&l);
	
	
	printf("\nProgram %s\n\n", argv[0]);

	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

