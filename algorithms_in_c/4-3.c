/*
 * =====================================================================================
 *
 *       Filename:  4-3.c
 *
 *    Description:  4-3
 *
 *        Version:  1.0
 *        Created:  Friday 05 July 2013 10:34:31  CST
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
#include "Item.h"
#include "STACK.h"

int main(int argc, char *argv[])
{
	char *a = argv[1];
	printf("a = %s\n", a);
	int i, N = strlen(a);
	STACKinit(N);
	for (i = 0; i < N; ++i) {
		if (a[i] == ')')
			printf("%c ", STACKpop());
		if ((a[i] == '+') || (a[i] == '*'))
			STACKpush(a[i]);
		if ((a[i] >= '0') || (a[i] <= '9'))
			printf("%c ", a[i]);
	}
	printf("\n");
	return 0;
}	
