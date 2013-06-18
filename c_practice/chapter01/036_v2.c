/*
 * =====================================================================================
 *
 *       Filename:  036.c
 *
 *    Description:  036
 *
 *        Version:  1.0
 *        Created:  06/07/2013 09:41:18 PM
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

int find_post(char origin[], char pattern[])
{
	int i, j, flag = 1;
	int len_o, len_p;

	len_o = strlen(origin);
	len_p = strlen(pattern);

	if (len_o == 0 || len_o < len_p)
		return -1;
	for (i = 0; i < len_o - len_p; ++i) {
		for (j = 0; j < len_p; ++j) {
			if (pattern[j] != origin[i+j]) {
				flag = 0;
				continue;
			}
				
		}
		if (flag == 1)
			return i;
	}
}	


void replace(char origin[], int post, char rep[])
{
	int i, len;
	len = strlen(rep);
	for (i = 0; i < len; ++i)
		origin[post+i] = rep[i];
	origin[post+i] = '\0';
}	

int main()
{
	char origin[MAX], pattern[MAX], rep[MAX];
	int post;

	printf("Please input original string:");
	gets(origin);
	printf("Please input substitute string:");
	gets(pattern);
	printf("Please input replace string:");
	gets(rep);
	
	
	post = find_post(origin, pattern);
	printf("The substitute position: %d\n", post);
//	len = strlen(pattern);
//	for (i = 0; i < len; )
//		origin[post++] == pattern[i++];
//	origin[post] = '\0';
	replace(origin, post, rep);
	printf("The final string:%s\n", origin);
	return 0;
}	