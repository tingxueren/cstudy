/*
 * =====================================================================================
 *
 *       Filename:  025.c
 *
 *    Description:  025
 *
 *        Version:  1.0
 *        Created:  06/06/2013 10:00:40 PM
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
	int a[10];
	printf("please input an int num: ");
	scanf("%d", &num);

	while (num != 1 && num != 145) {
		printf("num = %d->", num);
		i = 0;
		while (num) {
			a[i++] = num % 10;
			num = num / 10;
		} 
		i--;
		num = 0;
		for (; i >= 0; --i) {
			printf(" %d * %d %c", a[i], a[i], (i ? '+' : ' '));
			num += a[i] * a[i];
		}
		printf("= %d\n", num);
		
	}
	return 0;


}	
