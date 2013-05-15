/*
 * =====================================================================================
 *
 *       Filename:  qsort.c
 *
 *    Description:  qsort
 *
 *        Version:  1.0
 *        Created:  05/15/2013 08:23:13 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhang Dongsheng (mars), zhangdongsheng1224@gmail.com
 *   Organization:  HANGZHOU DIANZI UNIVERSITY
 *
 * =====================================================================================
 */

#include <stdio.h>

void swap(int v[], int i, int j)
{
	int temp;
	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}	

void qsort(int v[], int left, int right)
{
	int i, last;
	
	if (left >= right)
		return;
	swap(v, left, (left + right) / 2);
	last = left;
	for (i = left + 1; i <= right; ++i)
		if (v[i] < v[left])
			swap(v, ++last, i);
	swap(v, left, last);
	qsort(v, left, last - 1);
	qsort(v, last + 1, right);
}	

int main()
{
	int in[] = {5, 8, 24, 9, 8, 6};
	int i;
	for (i = 0; i < sizeof(in) / sizeof(in[0]); ++i)
		printf("%d\t", in[i]);
	printf("\n");
	qsort(in, 0, sizeof(in) / sizeof(in[0]) - 1);
	for (i = 0; i < sizeof(in) / sizeof(in[0]); ++i)
		printf("%d\t", in[i]);
	printf("\n");
	return 0;
	
}	
