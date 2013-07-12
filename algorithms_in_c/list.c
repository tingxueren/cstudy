/*
 * =====================================================================================
 *
 *       Filename:  list.c
 *
 *    Description:  list
 *
 *        Version:  1.0
 *        Created:  Thursday 04 July 2013 04:29:19  CST
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
#include "list.h"
link freelist;

void initNodes(int N)
{
	int i; 
	freelist = malloc((N + 1) * sizeof(*freelist));
	for (i = 0; i < N + 1; ++i)
		freelist[i].next = &freelist[i + 1];
	freelist[N].next = NULL;
}	

link newNode(int i)
{
	link x = deleteNext(freelist);
	x->item = i;
	x->next = x;
	return x;
}	

void freeNode(link x)
{
	insertNext(freelist, x);
}	
// x 后面插入 t
void insertNext(link x, link t)
{
	t->next = x->next;
	x->next = t;
}	
// 取出 x 的下一个节点
link deleteNext(link x)
{
	link t = x->next;
	x->next = t->next;
	return t;
}	

link Next(link x)
{
	return x->next;
}	

int Item(link x)
{
	return x->item;
}	
