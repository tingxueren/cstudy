/*
 * =====================================================================================
 *
 *       Filename:  stack.c
 *
 *    Description:  stack
 *
 *        Version:  1.0
 *        Created:  Wednesday 26 June 2013 07:27:39  CST
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
#define STACK_SIZE 50
typedef char DataType;

typedef struct 
{
	DataType *base;
	DataType *top;
	int stacksize;
} SeqStack;
// 分配内存标准做法，在这个函数里面分配好内存，做好初始化的工作，最后返回一个具体类型的指针
SeqStack *Initial()
{
	SeqStack *s = NULL;
	s = (SeqStack *)malloc(sizeof(SeqStack));
	s->base = (DataType *)malloc(sizeof(DataType) * STACK_SIZE);
	if (!s->base) exit(-1);
	s->top = s->base;
	s->stacksize = STACK_SIZE;
	return s;
}	

int main()
{
	SeqStack *mystack = NULL;
	printf("%p\n", mystack);
	mystack = Initial();
	printf("%p\n", mystack);
	return 0;
}	


