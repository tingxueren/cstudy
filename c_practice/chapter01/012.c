/*
 * =====================================================================================
 *
 *       Filename:  012.c
 *
 *    Description:  012
 *
 *        Version:  1.0
 *        Created:  06/06/2013 12:56:56 PM
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

int main()
{
	int button;
	printf("********************\n");
	printf("*  可选择按钮:     *\n");
	printf("*  1. 巧克力       *\n");
	printf("*  2. 蛋糕         *\n");
	printf("*  3. 可口可乐     *\n");
	printf("********************\n");
	printf("从1~3中选择按钮：");
	scanf("%d", &button);
	switch (button) {
		case 1:
			printf("你选择了巧克力\n");
			break;
		case 2:
			printf("你选择了蛋糕\n");
			break;
		case 3:
			printf("你选择了可口可乐\n");
			break;
		default:
			printf("输入错误\n");
			break;
	}
	return 0;
}	
