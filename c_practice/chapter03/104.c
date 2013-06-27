/*
 * =====================================================================================
 *
 *       Filename:  104.c
 *
 *    Description:  104
 *
 *        Version:  1.0
 *        Created:  Wednesday 26 June 2013 07:50:10  CST
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
typedef int ElemType;

typedef struct node 
{
	ElemType data;
	struct node *next;
} quenode;

struct quefr
{
	quenode *front, *rear;
};

void creat(struct quefr *q)
{
	quenode *h;
	h = (quenode *)malloc(sizeof(quenode));
	h->next = NULL;
	q->front = h;
	q->rear = h;

}	

void enqueue(struct quefr *q, int x)
{
	quenode *s = (quenode *)malloc(sizeof(quenode));
	s->data = x;
	s->next = NULL;
	q->rear->next = s;
	q->rear = s;
}	

ElemType dequeue(struct quefr *q)
{
	quenode *p;
	ElemType x;
	p = (quenode *)malloc(sizeof(quenode));
	if (q->front == q->rear) {
		printf("queue is NULL\n");
		x = 0;
	} else {
		p = q->front->next;
		q->front->next = p->next;
		if (p->next == NULL)
			q->rear = q->front;
		x = p->data;
		free(p);
	}
	return x;
}	

void display(struct quefr q)
{
	quenode *p;
	p = q.front->next;
	while (p) {
		printf("data = %d\n", p->data);
		p = p->next;
	}
	printf("end\n");
}	

int main()
{
	struct quefr *que;
	int n, i, x, sel;
	do {
	
		printf("\n");
		printf("    1    creat queue\n");
		printf("    2    into the queue\n");
		printf("    3    delete from queue\n");
		printf("    4    display queue\n");
		printf("    5    exit\n");
		printf("-----------------------------\n");
		printf("please choose(1, 2, 3, 4, 5): ");
		scanf("%d", &sel);
		switch (sel) {
			case 1:
				que = (struct quefr *)malloc(sizeof(struct quefr));
				creat(que);
				printf("please input the number of element which do you want to creat:");
				scanf("%d", &n);
				for (i = 0; i < n; ++i) {
					scanf("%d", &x);
					enqueue(que, x);
				}
				break;
			case 2:
				printf("Please input the element:");
				scanf("%d", &x);
				enqueue(que, x);
				break;
			case 3:
				printf("x = %d\n", dequeue(que));
				break;
			case 4:
				display(*que);
				break;
			case 5:
				exit(0);
			default:
				exit(0);
		}

	} while (sel <= 4);
	return 0;
}	
