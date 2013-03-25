/*
 * =====================================================================================
 *
 *       Filename:  1-7.c
 *
 *    Description:  1-7
 *
 *        Version:  1.0
 *        Created:  03/20/2013 09:06:17 PM
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

void DFS(VNode G[], int v)
{
	int w;
	printf("%d", G[v].data);
	visited[v] = 1;
	w = FirstAdj(G, v);
	while (w != -1) {
		if (visited[w] == 0)
			DFS(G, w);
		w = NextAdj(G, v);
	}
}	

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  main function
 * =====================================================================================
 */
int main(int argc, char *argv[])
{
	VNode G[5];
	CreatGraph(5, G);
	DFS(G,0);

	printf("\nProgram %s\n\n", argv[0]);

	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
