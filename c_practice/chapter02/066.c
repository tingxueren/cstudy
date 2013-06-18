/*
 * =====================================================================================
 *
 *       Filename:  066.c
 *
 *    Description:  066
 *
 *        Version:  1.0
 *        Created:  06/13/2013 08:23:33 PM
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

void max_min(int a[], int n , int *max, int *min)
{
	int *p;
	*max = *min = *a;
	for (p = a + 1; p < a + n; ++p) 
		if (*p > *max)
			*max = *p;
		else if (*p < *min)
			*min = *p;
}	

int main()
{
	int i, a[10];
	int max, min;
	printf("Input 10 integer numbers:\n");
	for (i = 0; i < 10; ++i)
		scanf("%d", &a[i]);
	max_min(a, 10, &max, &min);
	printf("max = %d, min = %d\n", max, min);
	return 0;
}	
