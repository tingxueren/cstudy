/*
 * =====================================================================================
 *
 *       Filename:  108.c
 *
 *    Description:  108
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


int main()
{
	int len = 0;
	int dep = 0;
	struct lnode *h;
	creatGList(&h);
	len = GLLength(h);
	dep = GLDepth(h);
	printf("\nThe length is: %d\nThe depth is: %d\n", len, dep);
	if (h != NULL) {
		printf("Glist is: ");
		printGList(h);
		printf("\n");
	}
	else 
		printf("Glist is NULL\n");
	return 0;

}	
