/*
 * =====================================================================================
 *
 *       Filename:  089.c
 *
 *    Description:  089
 *
 *        Version:  1.0
 *        Created:  06/19/2013 07:55:26 PM
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
#include <string.h>

typedef struct student
{
	int num;
	struct student *next;
} LNode, *LinkList;

LinkList creat()
{
	LinkList head, p1, p2;
	int in;
	head = (LinkList)malloc(sizeof(LNode));
	head->next = head;
	//scanf("%d", &in);
	in = getchar();
	p2 = head;
	while (in != '\n') {
		p1 = (LinkList)malloc(sizeof(LNode));
		p1->num = in;
		p2->next = p1;
		p2 = p1;
		in = getchar();
		//scanf("%d", &in);
	}
	p2->next = head;
	return head;
}	

int main()
{
	LinkList head, lp;
	printf("please input the linklist:\n");
	head = creat();
	lp = head->next;
	printf("The resultant linklist is:\n");
	while (lp != head) {
		printf("%c ", lp->num);
		lp = lp->next;
	}
	printf("\n");
}	
