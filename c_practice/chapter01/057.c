/*
 * =====================================================================================
 *
 *       Filename:  057.c
 *
 *    Description:  057
 *
 *        Version:  1.0
 *        Created:  06/09/2013 09:13:10 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhang Dongsheng (mars), zhangdongsheng1224@gmail.com
 *   Organization:  HANGZHOU DIANZI UNIVERSITY
 *
 * =====================================================================================
 */

#include <stdio.h>
#define TRUE 1
#define FALSE 0
#define EVEN(x) ((x % 2) ? FALSE : TRUE)

int main()
{
	int sum = 0, i;

	for (i = 0; i <= 100; ++i)
		if (EVEN(i))
			sum += i;
	printf("sum = %d\n", sum);
	return 0;
}	
