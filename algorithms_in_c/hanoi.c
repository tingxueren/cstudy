/*
 * =====================================================================================
 *
 *       Filename:  hanoi.c
 *
 *    Description:  hanoi
 *
 *        Version:  1.0
 *        Created:  Friday 05 July 2013 03:39:50  CST
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

void hanoi(int n, char A, char B, char C)
{
	if (n == 1) {
		printf("Move Dist %d from %c to %c\n", n, A, C);
	} else {
		hanoi(n - 1, A, C, B);
		printf("Move Dist %d from %c to %c\n", n, A, C);
		hanoi(n - 1, B, A, C);
	}

}	

int main()
{
	int n;
	printf("please input the number of column: ");
	scanf("%d", &n);
	hanoi(n, 'A', 'B', 'C');
	return 0;
}	
