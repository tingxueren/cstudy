/*
 * =====================================================================================
 *
 *       Filename:  stack_array.c
 *
 *    Description:  stack_array
 *
 *        Version:  1.0
 *        Created:  Friday 05 July 2013 10:18:49  CST
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
#include "Item.h"
#include "STACK.h"
static Item *s;
static int N;

void STACKinit(int maxN)
{
	s = malloc(maxN * sizeof(Item));
	N = 0;
}

int STACKempty()
{
	return N == 0;
}	

void STACKpush(Item item)
{
	s[N++] = item;
}	

Item STACKpop()
{
	return s[--N];
}	



