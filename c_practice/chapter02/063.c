/*
 * =====================================================================================
 *
 *       Filename:  063.c
 *
 *    Description:  063
 *
 *        Version:  1.0
 *        Created:  06/13/2013 07:42:03 PM
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
#define MAX 20

int main()
{
	int i = 0, *p, tmp, len, input[MAX];

	printf("The elements of original array:\n");
	
	scanf("%d", &tmp);
	while (tmp) {
		input[i++] = tmp;
		scanf("%d", &tmp);
	}
	len = i;
	printf("len = %d\n", len);
	p = input;
	for (i = 0; i < len / 2; ++i) {
		tmp = *(p + i);
		*(p + i) = *(p + len - 1 - i);
		*(p + len - 1 - i) = tmp;
	}

	for (i = 0; i < len; ++i)
		printf("%d ", *(p + i));
	printf("\n");
	return 0;

}	
