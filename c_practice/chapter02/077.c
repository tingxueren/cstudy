/*
 * =====================================================================================
 *
 *       Filename:  077.c
 *
 *    Description:  077
 *
 *        Version:  1.0
 *        Created:  06/17/2013 08:05:42 PM
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
#define MAX 20

int match(char *s, int len_s, char *p, int len_p)
{
	int i, j, flag;
	//int len_s = sizeof(s) / sizeof(int);
	//int len_p = sizeof(p) / sizeof(int);
	char *s_t = s;
	char *p_t = p;
	for (i = 0; i <= len_s - len_p; ++i) {
		flag = 1;
		for (j = 0; j < len_p; ++j) {
			if (*(s_t + i + j) != *(p_t + j))
				flag = 0;
			continue;
		}
		if (flag == 1)
			return i;
	}
	return -1;
	
}	

int main()
{
	char s[MAX] = "One world, One dream";
	char t[MAX] = "world";
	int len_s = strlen(s);
	int len_t = strlen(t);
	int p = match(s, len_s, t, len_t);
	if (p != -1) 
		printf("Matchable!\nThe start position is %d\n", p);
	else 
		printf("Not Match\n");
	return 0;
}	
