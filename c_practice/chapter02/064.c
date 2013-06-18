/*
 * =====================================================================================
 *
 *       Filename:  064.c
 *
 *    Description:  064
 *
 *        Version:  1.0
 *        Created:  06/13/2013 08:05:21 PM
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
	int a[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
	
	printf("%d, %d\n", a, *a);
	printf("%d, %d\n", a[0], *(a));
	printf("%d, %d\n", &a[0], &a[0][0]);
	printf("%d, %d\n", a[1], a + 1);
	printf("%d, %d\n", &a[1][0], *(a + 1) + 0);
	printf("%d, %d\n", a[1][1], *((a + 1) + 1));
	return 0;


}	
