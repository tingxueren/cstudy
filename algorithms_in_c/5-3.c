/*
 * =====================================================================================
 *
 *       Filename:  gcd.c
 *
 *    Description:  gcd
 *
 *        Version:  1.0
 *        Created:  Friday 05 July 2013 02:53:57  CST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhang Dongsheng (mars), zhangdongsheng1224@gmail.com
 *   Organization:  HANGZHOU DIANZI UNIVERSITY
 *
 * =====================================================================================
 */


#include <errno.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int gcd(int m, int n)
{
	if (n == 0)
		return m;
	return gcd(n, m % n);
}	

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  main function
 * =====================================================================================
 */
int main(int argc, char *argv[])
{
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	printf("gcd(%d, %d) = %d\n", a, b, gcd(a, b));
	printf("\nProgram %s\n\n", argv[0]);

	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
