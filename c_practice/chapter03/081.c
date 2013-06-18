/*
 * =====================================================================================
 *
 *       Filename:  081.c
 *
 *    Description:  081
 *
 *        Version:  1.0
 *        Created:  06/18/2013 07:36:43 PM
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

struct candidate
{
	char name[20];
	int count;
};

struct candidate cndt[3] = {{"王", 0}, {"张", 0}, {"李", 0}};

int main()
{
	char input[20];
	int i, j;
	for (i = 0; i < 10; ++i) {
		scanf("%s", input);
		for (j = 0; j < 3; ++j) {
			if (strcmp(input, cndt[j].name) == 0)
				cndt[j].count++;
			continue;
		}
	}
	for (i = 0; i < 3; ++i)
		printf("%s: %d\n", cndt[i].name, cndt[i].count);
	return 0;
}	
