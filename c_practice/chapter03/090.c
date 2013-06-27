/*
 * =====================================================================================
 *
 *       Filename:  090.c
 *
 *    Description:  090
 *
 *        Version:  1.0
 *        Created:  06/19/2013 07:06:25 PM
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

struct DulNode
{
	char name[20];
	struct DulNode *prior;
	struct DulNode *next;
};

struct DulNode *creat(int n)
{
	struct DulNode *head, *p1, *p2;
	int i;
	head = (struct DulNode *)malloc(sizeof(struct DulNode));
	head->prior = NULL;
	head->next = NULL;
	p2 = head;
	printf("Please input the records:\n");
	for (i = n; i > 0; --i) {
		//printf("Input the %d student's name: ", n + 1 - i);
		p1 = (struct DulNode *)malloc(sizeof(struct DulNode));
		scanf("%s", p1->name);
		p2->next = p1;
		p1->prior = p2;
		p2 = p1;
	}
	p2->next = NULL;
	return head;
}

struct DulNode *search(struct DulNode *h, char *x)
{
	struct DulNode *p;
	p = h->next;
	while (p->next != NULL) {
		if (strcmp(p->name, x) == 0) 
			return p;
		else
			p = p->next;

	}
	printf("can not find data\n");

}	

void del(struct DulNode *p) 
{
	p->next->prior = p->prior;
	p->prior->next = p->next;
	free(p);
}	

struct DulNode *reverse(struct DulNode *head)
{
	struct DulNode *p, *q, *r;
	p = head->next;
	q = p->next;
	r = q->next;
	if (head == NULL || head->next == NULL)
		return head;
	p->next = NULL;
	while (r != NULL) {
		q->next = p;
		p->prior = q;
		p = q;
		q = r;
		r = r->next;
	}
	q->next = p;
	p->prior = q;
	head->next = q;
	q->prior = head;
	return head;
}

int main()
{
	int num;
	struct DulNode *head, *sp;
	//char sname[20];

	printf("Please input the size of the list:\n");
	scanf("%d", &num);
	head = creat(num);
	sp = head->next;
	printf("Now The double list is:\n");
	while (sp) {
		printf("%s ", sp->name);
		sp = sp->next;
	}
	printf("\n");

	//printf("Please input the name which you want to find:\n");
	//scanf("%s", sname);
	//printf("The name you want to find is: %s\n", sname);
	//printf("Now the double list is:\n");
	//del(search(head, sname));
	printf("the reverse list is:\n");
	sp = reverse(head)->next;
	while (sp) {
		printf("%s ", sp->name);
		sp = sp->next;
	}
	printf("\n");
	return 0;

}	
