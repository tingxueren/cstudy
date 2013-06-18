/*
 * =====================================================================================
 *
 *       Filename:  037.c
 *
 *    Description:  037
 *
 *        Version:  1.0
 *        Created:  06/09/2013 10:41:30 AM
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

int palind(char str[], int start, int num)
{
	int flag = 1;
	int i;
	
	if (num == 0)
		;
	else
		for (i = 0; i < num / 2; ++i) {
			if (str[start + i] != str[start + num - 1 - i])
				flag = 0;
		}
	return flag;
}	

int main()
{
	int len;
	char str[MAX];
	
	printf("Please input string:\n");
	gets(str);
	
	len = strlen(str);
	if (palind(str, 0, len))
		printf("%s is palindrome\n", str);
	else
		printf("%s is not palindrome\n", str);
	return 0;

}	
