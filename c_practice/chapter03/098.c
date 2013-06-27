/*
 * =====================================================================================
 *
 *       Filename:  098.c
 *
 *    Description:  098
 *
 *        Version:  1.0
 *        Created:  Monday 24 June 2013 10:25:21  CST
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

typedef struct student
{
	char num;
	struct student *next;
} LNode, *LinkList;

LinkList creat()
{
	LinkList head, p1;
	char a;
	head = NULL;
	printf("Please input the linklist's records:\n");
	a = getchar();
	while (a != '\n') {
		p1 = (LinkList)malloc(sizeof(LNode));
		p1->num = a;
		p1->next = head;
		head = p1;
		a = getchar();
	}
	return head;
}	

int main()
{
	LinkList p;
	p = creat();
	printf("The Linklist is:\n");
	while (p) {
		printf("%c", p->num);
		p = p->next;
	}
	printf("\n");
	return 0;
}	
