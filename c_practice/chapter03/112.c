/*
 * =====================================================================================
 *
 *       Filename:  112.c
 *
 *    Description:  112
 *
 *        Version:  1.0
 *        Created:  Sunday 30 June 2013 09:29:41  CST
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

typedef struct node 
{
	char data;
	struct node *lchild, *rchild;
	int ltag, rtag;
} bithrnode, *bithrtree;

bithrtree CreatTree()
{
	char a;
	bithrtree new;
	scanf("%c", &a);
	if (a == '#')
		return NULL;
	else {
		new = (bithrtree)malloc(sizeof(bithrnode));
		new->data = a;
		new->ltag = 0;
		new->rtag = 0;
		new->lchild = CreatTree();
		new->rchild = CreatTree();
	}
	return new;
}	


void inthread(bithrtree p, bithrtree pre)
{
	if (p) {
		inthread(p->lchild, pre);
		if (p->lchild == NULL) {
			p->ltag = 1;
			p->lchild = pre;
		}
		if (pre->rchild == NULL) {
			pre->rtag = 1;
			pre->rchild = p;
		}
		pre = p;
		inthread(p->rchild, pre);
	}
}	

bithrtree inorder_thread(bithrtree t)
{
	bithrtree thrt;
	bithrtree pre, p;
	thrt = (bithrtree)malloc(sizeof(bithrnode));
	thrt->ltag = 0;
	thrt->rtag = 1;
	thrt->rchild = thrt;
	if (t == NULL)
		thrt->lchild = thrt;
	else {
		thrt->lchild = t;
		p = thrt->lchild;
		thrt->ltag = 0;
		inthread(p, pre);
		pre->rchild = thrt;
		pre->rtag = 1;
		pre->rchild = pre;
		thrt->rtag = 1;
	}
	return thrt;
}	

void Inorder_thr(bithrtree t)
{
	if (t != NULL) {
		if (t->ltag == 0)
			Inorder_thr(t->lchild);
		printf("%c", t->data);
		if (t->rtag == 0)
			Inorder_thr(t->rchild);
	}
}	


int main()
{
	bithrtree root;
	root = CreatTree();
	printf("inorder traversal:\n");
	Inorder_thr(root);
	return 0;
}	
