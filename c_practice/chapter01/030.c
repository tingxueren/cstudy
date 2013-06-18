/*
 * =====================================================================================
 *
 *       Filename:  030.c
 *
 *    Description:  030
 *
 *        Version:  1.0
 *        Created:  06/07/2013 02:35:22 PM
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

int main()
{
	int i, n, min, max, tmp, a[20];

	printf("please input the number of element:\n");
	scanf("%d", &n);
	printf("please input the element:\n");
	for (i = 0; i < n; ++i)
		scanf("%d", &a[i]);
	min = max = 0;
	for (i = 1; i < n; ++i) {
		if (a[i] < a[min])
			min = i;
		else if (a[i] > a[max])
			max = i;
	}
	printf("the position of min is: %d\n", min);
	printf("the position of max is: %d\n", max);
	tmp = a[min];
	a[min] = a[max];
	a[max] = tmp;
	printf("Now the array is:\n");
	for (i = 0; i < n; ++i)
		printf("%d\t", a[i]);
	printf("\n");
	return 0;

}	
