/*
 * =====================================================================================
 *
 *       Filename:  048.c
 *
 *    Description:  048
 *
 *        Version:  1.0
 *        Created:  06/09/2013 04:23:04 PM
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
#include <math.h>

int main()
{
	int total = 765;
	int num = 8;
	int n1, n8;
	n1 = total / ((pow(2, num)) - 1);
	n8 = (pow(2, num - 1)) * n1;
	printf("The first floor has %d\nThe eight floor has %d\n", n1, n8);
	return 0;

}	
