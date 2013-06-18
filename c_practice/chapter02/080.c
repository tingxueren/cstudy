/*
 * =====================================================================================
 *
 *       Filename:  080.c
 *
 *    Description:  080
 *
 *        Version:  1.0
 *        Created:  06/18/2013 07:16:50 PM
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

void sort(char *string[], int n)
{
	char *tmp;
	int i, j;
	for (i = 0; i < n; ++i) {
		for (j = i + 1; j < n; ++j)
			if (strcmp(string[i], string[j]) > 0) {
				tmp = string[i];
				string[i] = string[j];
				string[j] = tmp;
			}
	}

}	

int main()
{
	char *string[] = {
		"C language",
		"Basic",
		"World wide",
		"Olympic",
		"Great Wall"
	};
	char **p;
	int i;
	p = string;
	sort(p, 5);
	for (i = 0; i < 5; ++i)
		printf("%s\n", *(p + i));
	return 0;
}	
