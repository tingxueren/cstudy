/*
 * =====================================================================================
 *
 *       Filename:  003.c
 *
 *    Description:  003
 *
 *        Version:  1.0
 *        Created:  06/05/2013 10:19:44 PM
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

int main()
{
	int i, base, len, tmp, result = 0;
	char in[100];

	printf("Please input number string:\n");
	gets(in);
	// strupr gcc 中没有
	//strupr(in);
	printf("Please input base (2 or 8 or 16):\n");
	scanf("%d", &base);
	len = strlen(in);
	
	for (i = len - 1; i >= 0; --i) {
		if (in[i] >= 'a' && in[i] <= 'z')
			in[i] = in[i] - 'a' + 'A';
		//if ((in[i] - '0' >= base && in[i] < 'A') || in[i] - 'A' + 10 >= base) {
		//	printf("data error!!");
		//	exit(0);
		//}
		if (in[i] >= '0' && in[i] <= '9')
			tmp = in[i] - '0';
		else if (in[i] >= 'A' && in[i] - 'A' + 10 < base)
			tmp = in[i] - 'A' + 10;
		else {
			printf("data error!!");
			exit(0);
		}
		result = result * base + tmp;
	}
	printf("The result = %d\n", result);
	return 0;

}	
