/*
 * =====================================================================================
 *
 *       Filename:  073.c
 *
 *    Description:  073
 *
 *        Version:  1.0
 *        Created:  06/17/2013 07:26:38 PM
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

int *find(int *pa, int *pb, int an, int bn)
{
	int *pta, *ptb;
	pta = pa;
	ptb = pb;
	while (pta < pa + an && ptb < pb + bn) {
		if (*pta < *ptb)
			pta++;
		else if (*pta > *ptb)
			ptb++;
		else 
			return pta;
	}
}	

int main()
{
	int a[] = {1, 3, 5, 7, 9, 11, 13};
	int b[] = {2, 4, 6, 8, 11, 15, 17};
	int i, len_a, len_b;
	len_a = sizeof(a) / sizeof(a[0]);
	len_b = sizeof(b) / sizeof(b[0]);
	printf("The elements of array a: ");
	for (i = 0; i < len_a; ++i)
		printf("%d ", a[i]);
	printf("\n");
	printf("The elements of array b: ");
	for (i = 0; i < len_b; ++i)
		printf("%d ", b[i]);
	printf("\n");
	printf("The first element in both arrays is %d\n", *find(a, b, len_a, len_b));
	return 0;

}	
