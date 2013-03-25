/*
 * =====================================================================================
 *
 *       Filename:  1-7.c
 *
 *    Description:  1-7
 *
 *        Version:  1.0
 *         Created:  03/20/2013 09:06:17 PM
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

int emptyQ(LinkQueue *q)
{
	return (q->front == q->rear);
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

typedef struct ArcNode {
	int adjvex;
	struct ArcNode *next;
} ArcNode;

typedef struct VNode {
	int data;
	ArcNode *firstarc;

} VNode;

int visited[5] = {0, 0, 0, 0, 0};

void CreatGraph(int n, VNode G[])
{
	int i, e;
	ArcNode *p, *q;
	printf("Input the information of the vertex\n");
	for (i = 0; i < n; i++) {
		scanf("%d", &(G[i].data));
		G[i].firstarc = NULL;
	}

	for (i = 0; i < n; i++) {
		printf("Creat the edges for the %dth vertex\n", i);
		scanf("%d", &e);
		while (e != -1) {
			p = (ArcNode *)malloc(sizeof(ArcNode));
			p->next = NULL;
			p->adjvex = e;
			if (G[i].firstarc == NULL) G[i].firstarc = p;
			else q->next = p;
			// q 指向最后一个节点
			q = p;
			scanf("%d", &e);
		}
	
	}

}	

int FirstAdj(VNode G[], int v)
{
	if (G[v].firstarc != NULL) return (G[v].firstarc)->adjvex;
	return -1;
}	

int NextAdj(VNode G[], int v)
{
	ArcNode *p;
	p = G[v].firstarc;
	while (p != NULL) {
		if (visited[p->adjvex])
			p = p->next;
		else
			return p->adjvex;
	}
	return -1;
}	
// 逻辑估计有问题
void BFS(VNode G[], int v)
{
	int w;
	LinkQueue *q = NULL;
	initQueue(q); 
	//visit(v);
	visited[v] = 1;
	EnQueue(q, v);
	while (!emptyQ(q)) {
		DeQueue(q, &v);
		w = FirstAdj(G, v);
		while (w != -1) {
			if (visited[w] == 0) {
				EnQueue(q, w);
				visited[w] = 1;
			}
			w = NextAdj(G, v);
		}
	}

	
}	
//void DFS(VNode G[], int v)
//{
//	int w;
//	printf("%d", G[v].data);
//	visited[v] = 1;
//	w = FirstAdj(G, v);
//	while (w != -1) {
//		if (visited[w] == 0)
//			DFS(G, w);
//		w = NextAdj(G, v);
//	}
//}	

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  main function
 * =====================================================================================
 */
int main(int argc, char *argv[])
{
	int i;
	VNode G[5];
	CreatGraph(5, G);
	for (i = 0; i < 5; i ++)
		printf("G[%d].data = %d, (G[%d].firstarc)->adjvex = %d\n", i, G[i].data, i, (G[i].firstarc)->adjvex);
	//DFS(G,0);
	BFS(G,0);

	printf("\nProgram %s\n\n", argv[0]);

	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
