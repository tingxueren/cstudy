/*
 * =====================================================================================
 *
 *       Filename:  3-2.c
 *
 *    Description:  3-2
 *
 *        Version:  1.0
 *        Created:  05/15/2013 03:13:44 PM
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

void escape(char *s, char *t)
{
	int i,j;
	for (i = j = 0; t[i] != '\0'; ++i) {
		switch (t[i]) {
			case '\n':
				s[j++] = '\\';
				s[j++] = 'n';
				break;
			case '\t':
				s[j++] = '\\';
				s[j++] = 't';
				break;
			default:
				s[j++] = t[i];
				break;
		}
	}
	s[j] = '\0';
}	


int main()
{
	int i;
	char in[50], out[50];
	// scanf 遇到空白停止
	//scanf("%s", in);
	//gets 读取stdin 到 in 缓冲
	gets(in);
	
	//for (i = 0; in[i] != '\0'; ++i)
	//	printf("%c", in[i]);
	//printf("\n");
	escape(out, in);

	//for (i = j = 0; in[i] != '\0'; ++i) {
	//	switch (in[i]) {
	//		case '\n':
	//			out[j++] = '\\';
	//			out[j++] = 'n';
	//			break;
	//		case '\t':
	//			out[j++] = '\\';
	//			out[j++] = 't';
	//			break;
	//		default:
	//			out[j++] = in[i];
	//			break;
	//	}
	//}	
	//out[j] = '\0';	
	//printf("t[%d] = %d\ts[%d] = %d\n", i, t[i], j, s[j]);
	//printf("print out: \n");
	//printf("print out[0] = %c\n", out[0]);
	for (i = 0; out[i] != '\0'; ++i)
		printf("%c", out[i]);
	printf("\n");
	return 0;
}	
