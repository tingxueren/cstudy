/*
 * =====================================================================================
 *
 *       Filename:  004.c
 *
 *    Description:  004
 *
 *        Version:  1.0
 *        Created:  06/06/2013 08:57:17 AM
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

int bin_to_int(char in[], int start, int end)
{
	int i, tmp, result = 0;
	if (end < start) {
		printf("error!!");
		exit(0);	
	}
	//  for 从大到小循环要注意是 >=
	for (i = end; i >= start; --i) {
		tmp = in[i] - '0';
		result = result * 2 + tmp;
	}
	return result;
}	

int main()
{
	char in[35];
	int ip[4];
	int i;
	printf("Please input binary number:\n");
	// 严格读字符的时候，一个个读最好
	for (i = 0; i < 32; ++i)
		in[i] = getchar();
	in[32] = '\0';
	//gets(in);
	//scanf("%s", in);
	for (i = 0; in[i] != '\0'; ++i)
		printf("%c", in[i]);
	printf("\n");
	// 有点诡异，读取32个字符的时候最后的8位计算错误
	printf("ip[0] = %d\n", bin_to_int(in, 0, 7));
	printf("ip[1] = %d\n", bin_to_int(in, 8, 15));
	printf("ip[2] = %d\n", bin_to_int(in, 16, 23));
	printf("ip[3] = %d\n", bin_to_int(in, 24, 31));
	for (i = 24; i < 32; ++i)
		printf("%c", in[i]);
	printf("\n");

	for (i = 0; i < 4; ++i) {
		ip[i] = bin_to_int(in, i * 8, i * 8 + 7);
	}

	printf("ip:");
	for (i = 0; i < 4; ++i)
		printf("%d.", ip[i]);
	printf("\n");
	return 0;
	
}	
