/*
 * =====================================================================================
 *
 *       Filename:  initsqlist.c
 *
 *    Description:  init queue list
 *
 *        Version:  1.0
 *        Created:  03/16/2013 03:05:05 PM
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

#define MaxSize 100
#define ElemType int

typedef struct {
ElemType *elem;
int length;
int listsize;
} Sqlist;

void initSqlist(Sqlist *L) {
	L->elem = (int *)malloc(MaxSize * sizeof(ElemType));
	if (!L->elem) exit(0);
	L->length = 0;
	L->listsize = MaxSize;
}

void InsertElem(Sqlist *L, int i, ElemType item) {
	ElemType *base, *insertPtr, *p;
	if (i < 1||i > L->length + 1) exit(0);
	if (L->length >= L->listsize) {
		base = (int *)realloc(L->elem, (L->listsize + 100) * sizeof(ElemType));
		L->elem = base;
		L->listsize = L->listsize + 100;
	
	}
	insertPtr = &(L->elem[i-1]);
	for (p = &(L->elem[L->length-1]); p >= insertPtr; p--) {
		*(p+1) = *p;
	}
	*insertPtr = item;
	L->length++;
}



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  main function
 * =====================================================================================
 */
int main(int argc, char *argv[])
{
	Sqlist *intlist;
	initSqlist(intlist);
	printf("intlist->length = %d; intlist->listsize = %d\n", intlist->length, intlist->listsize);
	printf("init int list.\n");
	int i, j = 1;
	
	for (i = 1; i < 31; i++) {
		InsertElem(intlist, i, 2 * i);
		//intlist->elem[i] = 2 * i;
		//intlist->length++;
		//printf("intlist->length = %d; intlist->listsize = %d\n", intlist->length, intlist->listsize);
	
	}
	printf("intlist->length = %d; intlist->listsize = %d\n", intlist->length, intlist->listsize);
	for (i = 0; i < 50; i++) {
		printf("%d\t", intlist->elem[i]);
		if (j % 10 == 0)
			printf("\n");
	
		j++; 
	
	}


	//printf("\nProgram %s\n\n", argv[0]);

	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
