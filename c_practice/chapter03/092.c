/*
 * =====================================================================================
 *
 *       Filename:  092.c
 *
 *    Description:  092
 *
 *        Version:  1.0
 *        Created:  06/20/2013 07:10:58 PM
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
#define N 9
#define OVERFLOW 0
#define OK 1
int KeyW[N] = {4, 7, 5, 9, 3, 2, 6, 1, 8};

typedef struct LNode 
{
	int keyword;
	struct LNode *next;
} LNode, *LinkList;

void Joseph(LinkList p, int m, int x)
{
	LinkList q;
	int i;
	if (x == 0)
		return ;
	q = p;
	m %= x;
	if (m == 0)
		m = x;
	for (i = 1; i <= m; ++i) {
		p = q;
		q = p->next;

	}
	p->next = q->next;
	i = q->keyword;
	printf("%d ", q->keyword);
	free(q);
	Joseph(p, i, x - 1);
}	


int main()
{
	int i, m;
	LinkList Lhead, p, q;
	Lhead = (LinkList)malloc(sizeof(LNode));
	if (!Lhead)
		return OVERFLOW;
	Lhead->keyword = KeyW[0];
	Lhead->next = NULL;
	p = Lhead;
	for (i = 1; i < 9; ++i) {
		if (!(q = (LinkList)malloc(sizeof(LNode))))
			return OVERFLOW;
		q->keyword = KeyW[i];
		p->next = q;
		p = q;
	}
	p->next = Lhead;
	printf("Please input the first record m:\n");
	scanf("%d", &m);
	printf("The output alignment is:\n");
	Joseph(p, m, N);
	printf("\n");
	return OK;
}	
