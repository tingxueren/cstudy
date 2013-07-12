/*
 * =====================================================================================
 *
 *       Filename:  113.c
 *
 *    Description:  113
 *
 *        Version:  1.0
 *        Created:  Sunday 30 June 2013 10:11:05  CST
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
	int data;
	struct node *rchild;
} bitnode, *bitree;

bitree CreatTree()
{
	int a;
	bitree new;
	scanf("%d", &a);
	if (a == 0)
		return NULL;
	else {
		new = (bitree)malloc(sizeof(bitnode));
		new->data = a;
		new->lchild = CreatTree();
		new->rchild = CreatTree();

	}
	return new;
}	

void Search(bitree p, int key)
{
	int n = 0;
	while (p != NULL) {
		n++;
		if (p->data == key) {
			printf("successful, search %d times.\n", n);
			break;
		}
		else if (p->data > key)
			p = p->lchild;
		else
			p = p->rchild;
	}
	if (p == NULL)
		printf("no found!");
}	

int main()
{
	bitree root = NULL;
	int key;
	root = CreatTree();
	printf("please input the number which do you want to search:\n");
	scanf("%d", &key);
	Search(root, key);
	return 0;
}	
	
