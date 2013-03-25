/*
 * =====================================================================================
 *
 *       Filename:  1-5.c
 *
 *    Description:  1-5
 *
 *        Version:  1.0
 *        Created:  03/19/2013 09:23:31 PM
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
typedef char ElemType;
typedef struct QNode {
	ElemType data;
	struct QNode *next;
} QNode, *QueuePtr;

typedef struct {
	QueuePtr front;
	QueuePtr rear;
} LinkQueue;

void initQueue(LinkQueue *q) 
{
	q->front = q->rear = (QueuePtr)malloc(sizeof(QNode));
	if (!q->front) exit(0);
	q->front->next = NULL;
}	

void EnQueue(LinkQueue *q, ElemType e)
{
	QueuePtr p;
	p = (QueuePtr)malloc(sizeof(QNode));
	if (!q->front) exit(0);
	p->data = e;
	p->next = NULL;
	q->rear->next = p;
	q->rear = p;
}	

void DeQueue(LinkQueue *q, ElemType *e)
{
	QueuePtr p;
	if (q->front == q->rear) return;
	p = q->front->next;
	*e = p->data;
	q->front->next = p->next;
	if (q->rear == p) q->rear = q->front;
	free(p);
}	



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  main function
 * =====================================================================================
 */
int main(int argc, char *argv[])
{
	ElemType e;
	LinkQueue q;
	initQueue(&q);
	printf("Please input a string into a queue\n");
	scanf("%c", &e);
	while (e != '@') {
		EnQueue(&q, e);
		scanf("%c", &e);
		
	}

	printf("The string into the queue is\n");
	while (q.front != q.rear) {
		DeQueue(&q, &e);
		printf("%c", e);
	}
	printf("\n");
	printf("\nProgram %s\n\n", argv[0]);

	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
