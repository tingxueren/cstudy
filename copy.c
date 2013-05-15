/*
 * =====================================================================================
 *
 *       Filename:  copy.c
 *
 *    Description:  copy
 *
 *        Version:  1.0
 *        Created:  05/14/2013 10:08:52 PM
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

int main()
{
	char input[] = "hello, world";
	char out[20];
	// 用strlen() 对字符数组无意义，声明后字符数组中的值是不确定的
	//printf("strlen(out) = %d, sizeof(out) = %d, (sizeof(out) / sizeof(out[0])) = %d\n", strlen(out), sizeof(out), sizeof(out) / sizeof(out[0]));
	int i;
	i = 0;
	//for (i = 0; i < 20; ++i)
	//	printf("%c\n", out[i]);
	while ((out[i] = input[i]) != '\0')
		++i;
	for (i = 0; i < 15; ++i)
		printf("%c", out[i]);
	//printf("out = %s\n", out);
	//printf("out[%d] = %d\n", 13, out[13]);
	//printf("out[%d] = %c\n", 13, out[13]);
	//printf("out[%d] = %d\n", 14, out[14]);
	//printf("out[%d] = %c\n", 14, out[14]);
	return 0;
}	
