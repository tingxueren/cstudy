/*
 * =====================================================================================
 *
 *       Filename:  114.c
 *
 *    Description:  114
 *
 *        Version:  1.0
 *        Created:  Sunday 30 June 2013 10:38:36  CST
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
#define MAXSIZE 50

typedef struct
{
	char data;
	int weight;
	int parent;
	int left;
	int right;
	int flag;
} huffnode;

typedef struct
{
	char code[MAXSIZE];
	int start;
} huffcode;

huffnode htree[2*MAXSIZE];
huffcode hcode[MAXSIZE];

int my_select(int i)
{
	int k = 32767;
	int j, q;
	for (j = 0; j <= i; ++j) 
		if (htree[j].weight < k && htree[j].flag == -1) {
			k = htree[j].weight;
			q = j;

		}
	htree[q].flag = 1;
	return q;
}	

void creat_hufftree(int n)
{
	int i, l, r;
	for (i = 0; i < 2 * n; ++i) {
		htree[i].parent = htree[i].left = htree[i].right = htree[i].flag = -1;
	}

	for (i = n; i < 2 * n - 1; ++i) {
		l = my_select(i - 1);
		r = my_select(i - 1);
		htree[l].parent = i;
		htree[r].parent = i;
		htree[i].weight = htree[l].weight + htree[r].weight;
		htree[i].left = l;
		htree[i].right = r;
	}
}	

void creat_huffcode(int n)
{
	int i, f, c;
	huffcode d;
	for (i = 0; i < n; ++i) {
		d.start = n + 1;
		c = i;
		f = htree[i].parent;
		while (f != -1) {
			if (htree[f].left == c)
				d.code[--d.start] = '0';
			else
				d.code[--d.start] = '1';
			c = f;
			f = htree[f].parent;
		}
		hcode[i] = d;
	}
}	

void display_huffcode(int n)
{
	int i, k;
	printf("huffman is:\n");
	for (i = 0; i < n; ++i) {
		printf("%c:", htree[i].data);
		for (k = hcode[i].start; k <= n; ++k) 
			printf("%c", hcode[i].code[k]);
		printf("\n");
	}
}

int main()
{
	int n = 6;
	htree[0].data = 'a';
	htree[0].weight = 18;
	htree[1].data = 'b';
	htree[1].weight = 20;
	htree[2].data = 'c';
	htree[2].weight = 4;
	htree[3].data = 'd';
	htree[3].weight = 13;
	htree[4].data = 'e';
	htree[4].weight = 16;
	htree[5].data = 'f';
	htree[5].weight = 48;
	creat_hufftree(n);
	creat_huffcode(n);
	display_huffcode(n);
	return 0;
}	
