/*
 * =====================================================================================
 *
 *       Filename:  stack_list.c
 *
 *    Description:  stack_list
 *
 *        Version:  1.0
 *        Created:  Friday 05 July 2013 10:27:30  CST
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
#include "Item.h"
#include "STACK.h"

typedef struct STACKnode* link;
struct STACKnode {Item item; link next;};
static link head;

link NEW(Item item, link next)
{
	link x = malloc(sizeof(sizeof(*x)));
	x->item = item;
	x->next = next;
	return x;
}	

void STACKinit(int maxN)
{
	head == NULL;
}	

int STACKempty()
{
	return head == NULL;
}	

void STACKpush()
{
	head = NEW(item, head);
}	

Item STACKtop()
{
	Item item = head->item;
	link t = head->next;
	free(head);
	head = t;
	return item;
}	
	
