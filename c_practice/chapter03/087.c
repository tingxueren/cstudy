/*
 * =====================================================================================
 *
 *       Filename:  087.c
 *
 *    Description:  087
 *
 *        Version:  1.0
 *        Created:  06/19/2013 05:02:33 PM
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

struct LNode
{
	int data;
	struct LNode *next;
};

struct LNode *creat(int n)
{
	int i, a;
	struct LNode *head, *p1, *p2;
	head = NULL;
	for (i = n; i > 0; --i) {
		p1 = (struct LNode *)malloc(sizeof(struct LNode));
		scanf("%d", &a);
		p1->data = a;
		if (head == NULL) {
			head = p1;
			p2 = p1;
		} else {
			p2->next = p1;
			p2 = p1;
		}
	}
	p2->next = NULL;
	return head;
}

int main()
{
	int n;
	struct LNode *p;
	printf("Input the count of the nodes you want to creat: ");
	scanf("%d", &n);
	p = creat(n);
	printf("The result is:\n");
	while (p) {
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
	return 0;
}	
