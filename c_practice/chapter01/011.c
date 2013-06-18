/*
 * =====================================================================================
 *
 *       Filename:  011.c
 *
 *    Description:  011
 *
 *        Version:  1.0
 *        Created:  06/06/2013 12:49:15 PM
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
	float a, b;
	char c;
	printf("请输入运算格式：a(+,-,*,/)b\n");
	scanf("%f%c%f", &a, &c, &b);
	switch (c) {
		case '+': printf("%f + %f = %f\n", a, b, a + b); break;
		case '-': printf("%f - %f = %f\n", a, b, a - b); break;
		case '*': printf("%f * %f = %f\n", a, b, a * b); break;
		case '/':
			  if (b)
			  	printf("%f / %f = %f\n", a, b, a / b); 
			  else
				printf("除数不能为0\n");	  
			  break;
	}
	return 0;
}	
