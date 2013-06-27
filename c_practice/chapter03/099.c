/*
 * =====================================================================================
 *
 *       Filename:  099.c
 *
 *    Description:  099
 *
 *        Version:  1.0
 *        Created:  Tuesday 25 June 2013 07:29:24  CST
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

typedef struct {
	DataType *base;
	DataType *top;
	int stacksize;
} SeqStack;
// 初始化要特别注意，这个结构体需要先分配内存，内部的指针也要分配内存，参数为空，返回结构体指针
SeqStack *Inital()
{

	SeqStack *s = NULL;
	s = (SeqStack *)malloc(sizeof(SeqStack));
	s->base = (DataType *)malloc(sizeof(DataType) * STACK_SIZE);	
	if (!(s->base)) exit(-1);
	s->top = s->base;
	s->stacksize = STACK_SIZE;
	return s;
}	

int IsEmpty(SeqStack *s) 
{
	return s->top == s->base;
}	

int IsFull(SeqStack *s)
{
	return s->top - s->base == STACK_SIZE - 1;
}	

void Push(SeqStack *s, DataType x)
{
	if (IsFull(s)) {
		printf("栈上溢");
		exit(1);
	}
	*s->top++ = x;
}	

DataType Pop(SeqStack *s)
{
	if (IsEmpty(s)) {
		printf("栈为空");
		exit(1);
	}
	return *--s->top; 
}	

DataType Top(SeqStack *s)
{
	if (IsEmpty(s)) {
		printf("栈为空");
		exit(1);
	}
	return *(s->top - 1); 
}	

void conversion(int N, int B)
{ // N 十进制,转化为B进制
	int i;
	SeqStack *s=NULL;
	//printf("before inital s\n");
	s = Inital();
	//printf("after inital s\n");
	while (N) {
		Push(s, N % B);
		N = N / B;
	}
	
	while (!IsEmpty(s)) {
		i = Pop(s);
		printf("%d", i);
	}

}	


int main()
{
	int n, d;
	//SeqStack *stack = NULL;
	//printf ("%p\n", stack);
	//printf ("%p\n", stack->base);
	
	//stack = Inital();
	//printf("4\n");
	//printf ("%p\n", stack);
	
	//printf("%s\n", IsFull(stack) ? "Full" : "Not Full");
	//printf("5\n");

	//printf("%s\n", IsEmpty(stack) ? "Empty" : "Not Empty");
	//Pop(stack);
//	printf("stacksize is %d\n", stack->stacksize);
//	Push(stack, 10);
//	Push(stack, 20);
//	while (!IsEmpty(stack)) {
//		printf("%d ", Pop(stack));
//	}

	printf("Input the integer you want to transform:");
	scanf("%d", &n);
	printf("Input the integer of the Base:");
	scanf("%d", &d);
	printf("result: ");
	conversion(n, d);
	printf("\n");
	
	return 0;

}	
