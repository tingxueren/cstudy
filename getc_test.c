/*
 * =====================================================================================
 *
 *       Filename:  getc_test.c
 *
 *    Description:  getc_test.c
 *
 *        Version:  1.0
 *        Created:  05/09/2013 03:41:59 PM
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
#include <assert.h>

int main()
{
	FILE *fin, *fout;
	int node;
	int num = 0;

	fin = fopen("Matrix.in", "r");
	assert(fin != NULL && fout != NULL);
	// 读入数据测试，先初始化node
	// 在while中测试
	node = getc(fin);
	// while (node = getc(fin) && node != EOF) 会陷入死循环
	// 行末的 '\n' 也是个字符，会被getc收集到
	
	while (node != EOF) {
		++num;
		printf("%c", node);
		node = getc(fin);
	}

	printf("\n%d\n", num);
	return 0;
}	
