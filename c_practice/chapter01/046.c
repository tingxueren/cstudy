/*
 * =====================================================================================
 *
 *       Filename:  046.c
 *
 *    Description:  046
 *
 *        Version:  1.0
 *        Created:  06/09/2013 03:31:07 PM
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
	float x, m1, m2, m;
	char y, z;
	scanf("%f,%c,%c", &x, &y, &z);
	switch (y) {
		case 'a':
			m1 = 3.25;
			break;
		case 'b':
			m1 = 3.00;
			break;
		case 'c':
			m1 = 2.75;
			break;
	}
	
	switch (z) {
		case 'a':
			m2 = 0;
			break;
		case 'm':
			m2 = 0.05;
			break;
		case 'e':
			m2 = 0.1;
			break;
	}
	m = m1 * x * (1 - m2);
	printf("The type is oil is:%c\nThe type of server is:%c\nThe money is:%f\n", y, z, m);
	return 0;
}	
