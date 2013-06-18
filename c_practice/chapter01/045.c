/*
 * =====================================================================================
 *
 *       Filename:  045.c
 *
 *    Description:  045
 *
 *        Version:  1.0
 *        Created:  06/09/2013 03:05:42 PM
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

int gys(int x, int y)
{
	return y ? gys(y, x % y) : x ;
}	

int gbs(int x, int y)
{
	return x * y / gys(x, y);
}	

void yuefen(int fz, int fm)
{
	int s = gys(fz, fm);
	fz /= s;
	fm /= s;
	printf("the result is %d/%d\n", fz, fm);
}	

void m_add(int a, int b, int c, int d)
{
	int fz = a * d + b *c;
	int fm = b * d;
	yuefen(fz, fm);
}	

void m_mul(int a, int b, int c, int d)
{
	int fz = a * c;
	int fm = b * d;
	yuefen(fz, fm);
}	

void m_sub(int a, int b, int c, int d)
{
	int fz = a * d - b * c;
	int fm = b * d;
	yuefen(fz, fm);
}	

void m_div(int a, int b, int c, int d)
{
	int fz = a * d;
	int fm = b * c;
	yuefen(fz, fm);
}	


int main()
{
	char op;
	int a ,b, c, d;
	scanf("%d, %d, %c, %d, %d", &a, &b, &op, &c, &d);
	switch (op) {
		case '+': m_add(a, b, c, d); break;
		case '*': m_mul(a, b, c, d); break;
		case '-': m_sub(a, b, c, d); break;
		case '/': m_div(a, b, c, d); break;
	}
	return 0;
}	
