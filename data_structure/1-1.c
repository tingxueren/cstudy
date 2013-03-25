/*
 * =====================================================================================
 *
 *       Filename:  1-1.c
 *
 *    Description:  1-1
 *
 *        Version:  1.0
 *        Created:  03/16/2013 04:35:36 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhang Dongsheng (mars), zhangdongsheng1224@gmail.com
 *   Organization:  HANGZHOU DIANZI UNIVERSITY
 *
 * =====================================================================================
 */

#include <errno.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MaxSize 10

void insertElem(int Sqlist[], int *len, int i, int x)
{
	int t;
	if (*len == MaxSize || i < 1 || i > *len + 1) {
		printf("This insert is illegal\n");
		return;

	}
	for (t = *len - 1; t > i - 1; t--) {
		Sqlist[t + 1] = Sqlist[t];
	}
	Sqlist[i - 1] = x;
	*len = *len + 1;

}


void DelElem(int Sqlist[], int *len, int i)
{
	int j;
	if (i < 1 || i > *len) {
		printf("This insert illegal");
		return;
	}
	for (j = i; j < *len - 1; j++) {
		Sqlist[j - 1] = Sqlist[j];

	}
	*len = *len - 1;

}	

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  main function
 * =====================================================================================
 */
int main(int argc, char *argv[])
{
	int Sqlist[MaxSize];
	int len;
	int i;
	for (i = 0; i < 6; i++) {
		scanf("%d", &Sqlist[i]);
	}
	len = 6;
	for (i = 0; i < 6; i++)
		printf("%d", Sqlist[i]);
	printf("\nThe space length is %d\n", MaxSize - len);

	insertElem(Sqlist, &len, 3, 0);
	for (i = 0; i < len; i++) {
		printf("%d", Sqlist[i]);
	}
	printf("\nThe space length is %d\n", MaxSize - len);
	insertElem(Sqlist, &len, 11, 0);
	DelElem(Sqlist, &len, 6);
	for (i = 0; i < len; i++) {
		printf("%d", Sqlist[i]);
	}
	printf("\nThe space length is %d\n", MaxSize - len);

	printf("\nProgram %s\n\n", argv[0]);

	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
