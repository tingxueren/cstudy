/*
 * =====================================================================================
 *
 *       Filename:  085.c
 *
 *    Description:  085
 *
 *        Version:  1.0
 *        Created:  06/18/2013 08:26:36 PM
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
#define MAX 101

struct aa
{
	char name[15];
	char tel[15];
};

int readin(struct aa *a)
{
	int i = 0, n = 0;
	while (1) {
		scanf("%s", a[i].name);
		if (!strcmp(a[i].name, "#")) 	
			break;
		scanf("%s", a[i].tel);
		i++;
		n++;
	}
	return n;
}	

void search(struct aa *b, char *x, int n)
{
	int i = 0;
	while (1) {
		if (!strcmp(b[i].name, x)) {
			printf("name: %s tel: %s\n", b[i].name, b[i].tel);
			break;
		}
		else
			i++;
		n--;
		if (n == 0) {
			printf("No Fount!\n");
			break;
		}

	}
}

int main()
{
	struct aa s[MAX];
	int num;
	char name[15];
	num = readin(s);
	printf("input the name:");
	scanf("%s", name);
	search(s, name, num);
	return 0;
}	
