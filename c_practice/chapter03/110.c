/*
 * =====================================================================================
 *
 *       Filename:  110.c
 *
 *    Description:  110
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

void print(bitree bt)
{
	if (bt != NULL) {
		print(bt->lchild);
		printf("%c", bt->data);
		print(bt->rchild);
	}
}	

int btreedepth(bitree bt)
{
	int ldepth, rdepth;
	if (bt == NULL)
		return 0;
	else {
		ldepth = btreedepth(bt->lchild);
		rdepth = btreedepth(bt->rchild);
		return (ldepth > rdepth ? ldepth + 1 : rdepth + 1);
	}
}	

int ncount(bitree bt)
{
	if (bt == NULL)
		return 0;
	else
		return (ncount(bt->lchild) + ncount(bt->rchild) + 1);
}	

int lcount(bitree bt)
{
	if (bt == NULL)
		return 0;
	if (bt->lchild == NULL && bt->rchild == NULL)
		return 1;
	else
		return (lcount(bt->lchild) + lcount(bt->rchild));
}	

int main()
{
	bitree root;
	root = CreatTree();
	printf("contents of binary tree:\n");
	print(root);
	printf("\ndepth of binary tree:%d\n", btreedepth(root));
	printf("the number of the node:%d\n", ncount(root));
	printf("the number of the leaf nodes:%d\n",lcount(root));
	return 0;
}	

