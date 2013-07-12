/*
 * =====================================================================================
 *
 *       Filename:  5-11.c
 *
 *    Description:  5-11
 *
 *        Version:  1.0
 *        Created:  Friday 05 July 2013 05:00:30  CST
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
#define unknow -1
#define N 20

int knownF[N];

int F(int i)
{
	int t;
	if (knownF[i] != unknow) 
		return knownF[i];
	if (i == 0)
		t = 0;
	if (i == 1)
		t = 1;
	if (i > 1)
		t = F(i - 1) + F(i - 2);
	return knownF[i] = t;
}	

int main()
{
	int i;
	for (i = 0; i < N; ++i)
		knownF[i] = unknow;
	int n;
	printf("please intput the number of order: ");
	scanf("%d", &n);
	printf("F[%d] = %d\n", n, F(n));
	return 0;

}	


