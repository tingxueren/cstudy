/*
 * =====================================================================================
 *
 *       Filename:  095.c
 *
 *    Description:  095
 *
 *        Version:  1.0
 *        Created:  06/20/2013 08:55:16 PM
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

struct student
{
	int num;
	struct student *next;
};

//void insert(struct student *head , int data, int post)
//{
//	struct student *node;
//	struct student *p = head;
//	int i = 0;
//	//while (p && i <= post) {
//	//	p = p->next;
//	//	++i;
//	//}
//	for (i = 0; i <= post; ++i)
//		p = p->next;
//	if (!p ||i > post)
//		exit(1);
//	node = (struct student *)malloc(sizeof(struct student));
//	node->num = data;
//	node->next = p->next;
//	p->next = node;
//	printf("p->num = %d\n", p->num);
//	
//}	

struct student *creat(int n)
{
	struct student *head, *p, *q;
	int i;
	head = (struct student *)malloc(sizeof(struct student));
	head->next = NULL;
	q = head;
	printf("The record:\n");
	for (i = 0; i < n; ++i) {
		p = (struct student *)malloc(sizeof(struct student));
		scanf("%d", &p->num);
		q->next = p;
		q = p;
	}
	q->next = NULL;
	return head;
}	

void delnode(struct student *head, int n) 
{
	struct student *p, *q;
	p = head;
	int i;
	for (i = 1; i < n; ++i)
		p = p->next;
	q = p->next;
	p->next = q->next;
	free(q);
}	

int main()
{
	int i, n;
	struct student *head, *p;
	printf("Input the count of nodes you want to creat:");
	scanf("%d", &n);
	head = creat(n);
	printf("Now the list is:\n");
	p = head->next;
	while (p) {
		printf("%d ", p->num);
		p = p->next;
	}
	printf("\n");
	i = 3;
	//x = 123;
	//insert(head, x, i);
	delnode(head, i);
	printf("The result is:\n");
	p = head->next;
	while (p) {
		printf("%d ", p->num);
		p = p->next;
	}
	printf("\n");
	return 0;
}	
