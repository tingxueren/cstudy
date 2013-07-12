/*
 * =====================================================================================
 *
 *       Filename:  5-12.c
 *
 *    Description:  5-12
 *
 *        Version:  1.0
 *        Created:  Monday 08 July 2013 07:50:29  CST
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
#define N 5
typedef struct {int size; int val;} Item;
// 结构体初始化，填充所有的元素
Item items[N] = {{3, 4}, {4, 5}, {7, 10}, {8, 11}, {9, 13}};


int knap(int cap)
{
	int i, space, max, t;
	for (i = 0, max = 0; i < N; i++)
		if ((space = cap - items[i].size) >= 0)
			if ((t = knap(space) + items[i].val) > max)
				max = t;
	return max;
}	

int main()
{
	int input;
	printf("please input the cap of the bag: ");
	scanf("%d", &input);
	printf("result = %d\n", knap(input));
	return 0;
}	
