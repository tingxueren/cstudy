/*
 * =====================================================================================
 *
 *       Filename:  5-13.c
 *
 *    Description:  5-13
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
#include <string.h>
#define N 5
#define unknown -1
typedef struct {int size; int val;} Item;
// 结构体初始化，填充所有的元素
Item items[N] = {{3, 4}, {4, 5}, {7, 10}, {8, 11}, {9, 13}};
int maxKnown[50];
// 此处重新声明了个maxKnown，但是没有定义
//memset(maxKnown, 0, 50 * sizeof(int));
//memcpy(maxKnown, unknwon, 50);
//int i;
//for (i = 0; i < 50; ++i)
//	maxKnown[i] = unknown;
Item itemKnown[50];

void init()
{
	// memset 无法用于 int,只处理char
	memset(maxKnown, 0, 50 * sizeof(int));
	//int i;
	//for (i = 0; i < 50; ++i)
	//	maxKnown[i] = unknown;
}	

int knap(int M)
{
	int i, space, max, maxi, t;
	if (maxKnown[M] != unknown)
		return maxKnown[M];
	for (i = 0, max = 0; i < N; i++) {
		if ((space = M - items[i].size) >= 0)
			if ((t = knap(space) + items[i].val) > max) {
				max = t;
				maxi = i;
			
			}
	}	
	maxKnown[M] = max;
	itemKnown[M] = items[maxi];
	return max;
}	

int main()
{
	int input;
	printf("please input the cap of the bag: ");
	scanf("%d", &input);
	init();
	printf("result = %d\n", knap(input));
	return 0;
}	
