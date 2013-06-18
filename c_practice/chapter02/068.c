/*
 * =====================================================================================
 *
 *       Filename:  068.c
 *
 *    Description:  068
 *
 *        Version:  1.0
 *        Created:  06/13/2013 08:45:50 PM
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

void string_sort(char *strings[], int n)
{
	char *tmp;
	int i, j;
	for (i = 0; i < n; ++ i) {
		for (j = i + 1; j < n; ++j) {
			if (strcmp(strings[i], strings[j]) > 0) {
				tmp = strings[i];
				strings[i] = strings[j];
				strings[j] = tmp;
			}
		}
	}
}	

int main()
{
	int n = 5;
	int i;
	char *strings[] = {
		"C language", "Basic", "Word wide", "Hello, world", "one world, one dream!"
	};
	string_sort(strings, n);
	for (i = 0; i < n; ++i)
		printf("%s\n", strings[i]);
	return 0;
}	
