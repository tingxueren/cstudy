/*
 * =====================================================================================
 *
 *       Filename:  109.c
 *
 *    Description:  109
 *
 *        Version:  1.0
 *        Created:  Thursday 27 June 2013 09:51:12  CST
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
typedef char ElemType;

typedef struct lnode
{
	int tag;
	union {
		ElemType data;
		struct lnode *sublist;
	} val;
	struct lnode *next;
} GLNode;

void creatGList(struct lnode **gl)
{
	char ch;
	ch = getchar();
	if (ch == '#') {
		*gl = NULL;
	}
	else if (ch == '(') {
		*gl = (GLNode *)malloc(sizeof(GLNode));
		(*gl)->tag = 1;
		creatGList(&((*gl)->val.sublist));

	} else {
		*gl = (GLNode *)malloc(sizeof(GLNode));
		(*gl)->tag = 0;
		(*gl)->val.data = ch;
	}
	ch = getchar();
	if (*gl == NULL) {;}
	else if (ch == ',') {
		creatGList(&((*gl)->next));
	} else {
		(*gl)->next = NULL;
	
	}
}	

void printGList(struct lnode *gl)
{
	if (gl->tag == 1) {
		printf("(");
		if (gl->val.sublist == NULL) {
			printf("#");
		}
		else {
			printGList(gl->val.sublist);
		}
		printf(")");
	} else
		printf("%c", gl->val.data);
	if (gl->next != NULL) {
		printf(",");
		printGList(gl->next);
	}
}	

int GLLength(GLNode *gl)
{
	int n = 0;
	gl = gl->val.sublist;
	while (gl != NULL) {
		n++;
		gl = gl->next;
	}
	return n;
}	

int GLDepth(GLNode *gl) 
{
	int max = 0, dep;
	if (gl->tag == 0)
		return 0;
	gl = gl->val.sublist;
	if (gl == NULL)
		return 1;
	while (gl != NULL) {
		if (gl->tag == 1) {
			dep = GLDepth(gl);
			if (dep > max)
				max = dep;
		}
		gl = gl->next;
	}
	return (max + 1);

}	

GLNode *GLCopy(GLNode *gl)
{
	GLNode *q = NULL;
	if (gl == NULL)
		return NULL;
	q = (GLNode *)malloc(sizeof(GLNode));
	q->tag = gl->tag;
	if (gl->tag == 1) 
		q->val.sublist = GLCopy(gl->val.sublist);
	else
		q->val.data = gl->val.data;
	q->next = GLCopy(gl->next);
	return q;
}	

GLNode *head(GLNode *gl)
{
	GLNode *p = gl->val.sublist;
	GLNode *q, *t;
	if (gl == NULL) {
		printf("NULL\n");
		return NULL;
	} 

	if (gl->tag == 0) {
		printf("atom is not head!\n");
		return NULL;
	}

	if (p->tag == 0) {
		q = (GLNode *)malloc(sizeof(GLNode));
		q->tag = 0;
		q->val.data = p->val.data;
		q->next = NULL;
	} else {
		t = (GLNode *)malloc(sizeof(GLNode));
		t->tag = 1;
		t->val.sublist = p->val.sublist;
		t->next = NULL;
		q = GLCopy(t);
		free(t);

	}
	return q;
}	

GLNode *tail(GLNode *gl) 
{
	GLNode *p = gl->val.sublist;
	GLNode *q, *t;
	if (gl == NULL) {
		printf("NULL\n");
		return NULL;
	} 

	if (gl->tag == 0) {
		printf("atom is not tail!\n");
		return NULL;
	}
	p = p->next;
	t = (GLNode *)malloc(sizeof(GLNode));
	t->tag = 1;
	t->val.sublist = p;
	t->next = NULL;
	q = GLCopy(t);
	free(t);
	return q;
}	

int main()
{
	struct lnode *g, *v, *h;
	creatGList(&h);
	v = head(h);
	g = tail(h);

	if (v != NULL) {
		printf("Head is: ");
		printGList(v);
		printf("\n");
	}

	if (g != NULL) {
		printf("tail is: ");
		printGList(g);
		printf("\n");
	}

	if (h != NULL) {
		printf("Glist is: ");
		printGList(h);
		printf("\n");
	} else
		printf("Glist is NULL\n");
	return 0;

}	
