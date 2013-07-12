/*
 * =====================================================================================
 *
 *       Filename:  111.c
 *
 *    Description:  111
 *
 *        Version:  1.0
 *        Created:  Sunday 30 June 2013 07:49:19  CST
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
	struct node *lchild;
	char data;
	struct node *rchild;
} bitnode, *bitree;

bitree CreatTree()
{
	char a;
	bitree new;
	scanf("%c", &a);
	if (a == '#')
		return NULL;
	else {
		new = (bitree)malloc(sizeof(bitnode));
		new->data = a;
		new->lchild = CreatTree();
		new->rchild = CreatTree();
	}
	return new;
}	

void PreorderTraverse(bitree bt)
{
	if (bt != NULL) {
		printf("%c", bt->data);
		PreorderTraverse(bt->lchild);
		PreorderTraverse(bt->rchild);
	}
}	

void InorderTraverse(bitree bt)
{
	if (bt != NULL) {
		InorderTraverse(bt->lchild);
		printf("%c", bt->data);
		InorderTraverse(bt->rchild);
	}
}	

void PostorderTraverse(bitree bt) 
{
	if (bt != NULL) {
		PostorderTraverse(bt->lchild);
		PostorderTraverse(bt->rchild);
		printf("%c", bt->data);
	}
}

int main()
{
	bitree root;
	root = CreatTree();
	printf("Preorder Traversal:\n");
	PreorderTraverse(root);
	printf("\n");
	printf("Inorder Traversal:\n");
	InorderTraverse(root);
	printf("\n");
	printf("Postorder Traversal:\n");
	PostorderTraverse(root);
	printf("\n");
	return 0;
}	

