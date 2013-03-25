/*
 * =====================================================================================
 *
 *       Filename:  1-6.c
 *
 *    Description:  1-6
 *
 *        Version:  1.0
 *        Created:  03/20/2013 07:50:16 PM
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

typedef struct BiTNode {
	char data;
	struct BiTNode *lchild, *rchild;
} BiTNode, *BiTree;

void CreatBiTree(BiTree *T)
{
	char c;
	scanf("%c", &c);
	if (c == ' ') 
		*T = NULL;
	else {
		*T = (BiTNode *)malloc(sizeof(BiTNode));
		(*T)->data = c;
		CreatBiTree(&((*T)->lchild));
		CreatBiTree(&((*T)->rchild));
	}

}	

void visit(char c, int level)
{
	if (c == 'D')
		printf("%c is at %d level of BiTree\n", c, level);
}	

void PreOrderTraverse(BiTree T, int level)
{
	if (T) {
		visit(T->data, level);
		PreOrderTraverse(T->lchild, level + 1);
		PreOrderTraverse(T->rchild, level + 1);
	
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
	int level = 1;
	BiTree T = NULL;
	CreatBiTree(&T);
	PreOrderTraverse(T, level);
	printf("\nProgram %s\n\n", argv[0]);

	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
