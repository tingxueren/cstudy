/*
 * =====================================================================================
 *
 *       Filename:  022.c
 *
 *    Description:  022
 *
 *        Version:  1.0
 *        Created:  06/06/2013 08:59:03 PM
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
	int num, i;
	printf("please enter a num: ");
	scanf("%d", &num);
	for (i = 1; i <= num; ++i)
		if (num % i == 0)
			printf("%d ", i);
	printf("\n");
	return 0;

}	
