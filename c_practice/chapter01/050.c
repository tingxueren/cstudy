/*
 * =====================================================================================
 *
 *       Filename:  050.c
 *
 *    Description:  050
 *
 *        Version:  1.0
 *        Created:  06/09/2013 05:06:51 PM
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
	int day = 9;
	int x1, x2 = 1;
	while (day) {
		x1 = (x2 + 1) * 2;
		x2 = x1;
		day--;
	}
	printf("The total is %d\n", x1);
	return 0;
	
}	
