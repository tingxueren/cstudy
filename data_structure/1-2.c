/*
 * =====================================================================================
 *
 *       Filename:  1-2.c
 *
 *    Description:  1-2
 *
 *        Version:  1.0
 *        Created:  03/16/2013 05:03:25 PM
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

#define MaxSize 10
typedef int ElemType;

typedef struct {
ElemType *elem;
int length;
int listsize;
} Sqlist;

void initSqlist(Sqlist *L)
{
	L->elem = (int *)malloc(MaxSize * sizeof(ElemType));
	if (!L->elem) exit(0);
	L->length = 0;
	L->listsize = MaxSize;

}	

void InsertElem(Sqlist *L, int i, ElemType item)
{
	ElemType *base, *insertPtr, *p;
	if (i < 1 || i > L->length + 1) exit(0);
	if (L->length >= L->listsize) {
		base = (ElemType *)realloc(L->elem, (L->listsize + 100) * sizeof(ElemType));
		L->elem = base;
		L->listsize = L->listsize + 100;
	}
	insertPtr = &(L->elem[i - 1]);
	for (p = &(L->elem[L->length - 1]); p >= insertPtr; p--) {
		*(p + 1) = *p;
	}
	*insertPtr = item;
	L->length++;
}	

void DelElem(Sqlist *L, int i)
{
	ElemType *delItem, *q, *r;
	if (i < 1 || i > L->length) exit(0);
	delItem = &(L->elem[i - 1]);
	q = L->elem + L->length - 1;
	for (r = delItem; r < q; ++r)
		*r = *(r + 1);
	L->length--;
}	




/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  main function
 * =====================================================================================
 */
int main(int argc, char *argv[])
{
	Sqlist l;
	int i; 
	initSqlist(&l);
	for (i = 0; i < 15; i++) {
		InsertElem(&l, i + 1, i + 1);
	}
	printf("\nThe content of list is \n");
	for (i = 0; i < l.length; i++)
		printf("%d", l.elem[i]);
	DelElem(&l, 5);
	printf("\nDelete the fifth element\n");
	for (i = 0; i < l.length; i++)
		printf("%d", l.elem[i]);
	
	printf("\nProgram %s\n\n", argv[0]);

	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
