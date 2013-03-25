/*
 * =====================================================================================
 *
 *       Filename:  1-4.c
 *
 *    Description:  1-4
 *
 *        Version:  1.0
 *        Created:  03/19/2013 08:20:23 PM
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
#define STACK_INIT_SIZE 20
#define STACKINCREMENT 10


typedef char ElemType;
typedef struct {
	ElemType *base;
	ElemType *top;
	int stacksize;
} sqStack;

void initStack(sqStack *s)
{
	s->base = (ElemType *)malloc(STACK_INIT_SIZE * sizeof(ElemType));
	if (!s->base) exit(0);
	s->top = s->base;
	s->stacksize = STACK_INIT_SIZE;
}

void Push(sqStack *s, ElemType e)
{
	if (s->top - s->base >= s->stacksize) {
		s->base = (ElemType *)realloc(s->base, (s->stacksize + STACKINCREMENT) * sizeof(ElemType));
		if (!s->base) exit(0);
		s->top = s->base + s->stacksize;
		s->stacksize = s->stacksize + STACKINCREMENT;
	
	}
	*(s->top) = e;
	s->top++;
}	

void Pop(sqStack *s, ElemType *e)
{
	if (s->top == s->base) return;
	*e = *--(s->top);
}	

int StackLen(sqStack s)
{
	return (s.top - s.base);
}	




/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  main function
 * =====================================================================================
 */
int main(int argc, char *argv[])
{
	ElemType c;
	sqStack s;
	int len, i, sum = 0;
	printf("Please input a Binary digit\n");

	initStack(&s);
	scanf("%c", &c);
	while (c != '#') {
		Push(&s, c);
		scanf("%c", &c);
	
	}
        // 读入 #
	getchar();
	len = StackLen(s);
	for (i = 0; i < len; i++) {
		Pop(&s, &c);
		sum = sum + (c - 48) * pow(2, i);
	
	}
	printf("Decimal is %d\n", sum);

	printf("\nProgram %s\n\n", argv[0]);

	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
