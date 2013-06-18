/*
 * =====================================================================================
 *
 *       Filename:  039.c
 *
 *    Description:  039
 *
 *        Version:  1.0
 *        Created:  06/09/2013 11:20:59 AM
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
#define MAX 50

int main()
{
	char str[MAX];
	int i, start, num;
	
	printf("Please input string:");
	gets(str);
	printf("Please input delete position:");
	scanf("%d", &start);
	printf("Please input delete length:");
	scanf("%d", &num);

	for (i = start + num - 1; str[i] != '\0'; ++i)
		str[i - num] = str[i];
	str[i - num] = '\0';
	printf("The final string: %s\n", str);
	return 0;

}	


