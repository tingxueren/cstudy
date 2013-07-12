/*
 * =====================================================================================
 *
 *       Filename:  bucket_sort.c
 *
 *    Description:  bucket_sort
 *
 *        Version:  1.0
 *        Created:  Friday 12 July 2013 02:35:02  CST
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
#include <time.h>
#define MAX 10
#define NUM 10

int a[MAX];
typedef struct node 
{
	int item;
	struct node *prev;
	struct node *next;
} Node;

Node *b[NUM];

void list_sort(Node *list)
{
	// 空表或者单个节点
	if (list == NULL || list->next == NULL)
		return;
	int min, tmp;
	Node *p = list;
	while (p != NULL) {
		Node *q = p;
		Node *r = p;
		min = p->item;
		while (q != NULL) {
			if (q->item < min) {
				r = q;
			}	
			q = q->next;
		}
		if (r != p) {
			// 此处未交换节点，交换节点的值，效率比较低
			tmp = p->item;
			p->item = r->item;
			r->item = tmp;
		}
		p = p->next;
	}

}	

void bucket_sort(int a[])
{
	int i,j;
	// 读入所有的数据到链表
	for (i = 0; i < MAX; ++i){
		j = a[i] / NUM;
		Node *q = malloc(sizeof(*q));
		q->item = a[i];
		q->prev = NULL;
		q->next = NULL;
		//printf("a[%d] = %d\n", i, a[i]);
		Node *p = b[j];
		if (p == NULL)
			b[j] = q;
		else if (p != NULL && p->next != NULL){
			// 在 p 后插入节点 q
			// 双向链表, 普通节点处理
			q->next = p->next;
			p->next->prev = q;
			p->next = q;
			q->prev = p;
		} else if (p != NULL && p->next == NULL){ 
			// 第一个节点处理
			p->next = q;
			q->prev = p;

		}	
	}
	for (i = 0; i < NUM; ++i) 
		list_sort(b[i]);
}	

int main()
{
	int i;
	for (i = 0; i < NUM; ++i)
		b[i] = NULL;

	srandom(time(NULL));
	for (i = 0; i < MAX; ++i) {
		a[i] = random() % 100;
		printf("%3d", a[i]);
	}
	printf("\n");
	bucket_sort(a);
	for (i = 0; i < NUM; ++i) {
		Node *p = b[i];
		while (p != NULL) {
			printf("%3d", p->item);
			p = p->next;
		}
	}
	printf("\n");
	return 0;
}	
