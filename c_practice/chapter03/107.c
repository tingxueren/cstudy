/*
 * =====================================================================================
 *
 *       Filename:  107.c
 *
 *    Description:  107
 *
 *        Version:  1.0
 *        Created:  Thursday 27 June 2013 08:32:34  CST
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
#define MAX 100

typedef struct node
{
	char data[50];
	struct node *next;
} strnode;

typedef struct head
{
	int number;
	int length;
	strnode *next;
} headnode;

headnode Head[MAX];

void init()
{
	int i;
	for (i = 0; i < MAX; ++i)
		Head[i].length = 0;

}	

int menu()
{
	int i = 0;
	printf("1. Input\n");
	printf("2. Delete\n");
	printf("3. List\n");
	printf("4. Exit\n");
	while (i <= 0 || i  > 4) {
		printf("please choose\n");
		scanf("%d", &i);
	}
	return i;
}	

void input()
{
	strnode *p;
	int j, LineNum;
	char ch;
	while (1) {
		j = -1;
		printf("input the number of line(0~100),101~exit:\n");
		scanf("%d", &LineNum);
		if (LineNum < 0 || LineNum > MAX)
			return;
		printf("Please input #~end:\n");
		Head[LineNum].number = LineNum;
		Head[LineNum].next = (strnode *)malloc(sizeof(strnode));
		p = Head[LineNum].next;
		ch = getchar();
		while (ch != '#') {
			j++;
			if (j >= 50) {
				p->next = (strnode *)malloc(sizeof(strnode));
				p = p->next;
			}
			p->data[j % 50] = ch;
			ch = getchar();
		}
		Head[LineNum].length = j + 1;
	}
}	

void delline()
{
	strnode *p, *q;
	int LineNum;
	while (1) {
		printf("input the number of line which do you want to delete(0~100), 101-ext:\n");
		scanf("%d", &LineNum);
		if (LineNum < 0 || LineNum > MAX)
			return;
		p = Head[LineNum].next;
		if (Head[LineNum].length > 0)
			while (p != NULL) {
				q = p->next;
				free(p);
				p = q;
			}
		Head[LineNum].length = 0;
		Head[LineNum].number = 0;

	}
}

void list()
{
	strnode *p;
	int i, j, m, n;
	for (i = 0; i < MAX; ++i) {
	
		if (Head[i].length > 0) {
			printf("line %d", Head[i].number);
			n = Head[i].length;
			m = 1;
			p = Head[i].next;
			for (j = 0; j < n; ++j) {
				if (j >= 50 * m) {
					p = p->next;
					m++;
				} else
					printf("%c", p->data[j % 50]);

			}
			printf("\n");
		}
	}
	printf("\n");
}	


int main()
{
	int sel;
	init();
	while (1) {
		sel = menu();
		switch (sel)
		{
			case 1:
				input();
				break;
			case 2:
				delline();
				break;
			case 3:
				list();
				break;
			case 4:
			default:
				exit(0);
		}	
	}
	return 0;
}	
