/*
 * =====================================================================================
 *
 *       Filename:  093.c
 *
 *    Description:  093
 *
 *        Version:  1.0
 *        Created:  06/20/2013 07:48:23 PM
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
#define MAX 20

struct sqlist
{
	int data[MAX];
	int length;
};

void InsertList(struct sqlist *l, int data, int post)
{
	int i;
	if (post > l->length || post < 0) {
		printf("OVERFLOW!\n");
		exit(1);
	}
	if (l->length > MAX) {
		printf("OVERFLOW!\n");
		exit(1);
	}
	for (i = l->length - 1; i >= post; --i)
		l->data[i + 1] = l->data[i];
	l->data[post] = data;
	l->length++; 
}	

//void InsertList(struct sqlist *l, int t, int i)
//{   
//    int j;
//    if (i < 0 || i > l->length)
//    {   
//        printf("position error");
//        exit(1);
//    } 
//    if (l->length >= MAX)
//    {   
//        printf("overflow");
//        exit(1);
//    }
//    for (j = l->length - 1; j >= i; j--)
//        l->data[j + 1] = l->data[j];
//    l->data[i] = t;
//    l->length++;
//}

int main()
{
	int i, n, t;
	struct sqlist *head;
	head = (struct sqlist *)malloc(sizeof(struct sqlist));
	head->length = 0;
	printf("pleast input the size of the list:\n");
	scanf("%d", &n);
	printf("n = %d\n", n);
	printf("please input the elements of the list:\n");
	for (i = 0; i < n; ++i) {
		scanf("%d", &t);
		//printf("n = %d\n", t);
		InsertList(head, t, i);
	}

	printf("Now the list is:\n");
	for (i = 0; i < head->length; ++i) {
		printf("%d ", head->data[i]);
	}
	printf("\n");
	return 0;

}	
