/*
 * =====================================================================================
 *
 *       Filename:  097.c
 *
 *    Description:  097
 *
 *        Version:  1.0
 *        Created:  Monday 24 June 2013 04:51:19  CST
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

struct student *creat(int n)
{
	int i;
	struct student *head, *p1, *p2;
	int a;
	head = NULL;
	printf("The record:\n");
	for (i = 0; i < n; ++i) {
		p1 = (struct student *)malloc(sizeof(struct student));
		scanf("%d", &a);
		p1->num = a;
		if (head == NULL) {
			head = p1;
			p2 = p1;
		} else {
			p2->next = p1;
			p2 = p1;
		}
	}
	p2->next = NULL;
	return head;
}	


struct student *reverse(struct student *head)
{
    struct student *p,  *r;
    if (head->next && head->next->next)
    {
        p = head;
        r = p->next;
        p->next = NULL;
        while (r)
        {
            p = r;
            r = r->next;
            p->next = head;
            head = p;
        } return head;
    }
    return head;
}

int main()
{
	int n;
	struct student *p, *q;
	printf("Input the count of the nodes you want to creat: ");
	scanf("%d", &n);
	p = creat(n);
	q = p;
	// 遍历链表
	printf("The list is:\n");
	while (p) {
		printf("%d ", p->num);
		p = p->next;
	}
	printf("\n");
	// 此时 p = NULL
	// q 依旧是开始的表头
	q = reverse(q);
	printf("The reverse list is:\n");
	while (q) {
		printf("%d ", q->num);
		q = q->next;
	}
	printf("\n");
	return 0;

}	
