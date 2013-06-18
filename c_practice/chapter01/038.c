/*
 * =====================================================================================
 *
 *       Filename:  038.c
 *
 *    Description:  038
 *
 *        Version:  1.0
 *        Created:  06/09/2013 11:02:06 AM
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
	char a[MAX], b[MAX];
	int i, len_a, len_b;
	
	printf("please input first str:\n");
	gets(a);

	printf("please input second str:\n");
	gets(b);
	
	len_a = strlen(a);
	len_b = strlen(b);
	if (len_a + len_b > MAX -1) {
		printf("Not enough space!!!");
		return 0;
	
	}
	else {
		for (i = 0; i < len_b;)
			a[len_a++] = b[i++];
		a[len_a] = '\0';
	}
	printf("Final first srt: %s\n", a);
	return 0;
	
}	
