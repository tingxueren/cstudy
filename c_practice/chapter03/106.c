/*
 * =====================================================================================
 *
 *       Filename:  106.c
 *
 *    Description:  106
 *
 *        Version:  1.0
 *        Created:  Thursday 27 June 2013 07:54:41  CST
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
#define MAX 50

typedef struct
{
	char string[MAX];
	int len;

} str;

int findstr(str s, str p)
{
	int i, j, post;
	int flag = 1;
	if (s.len < p.len) {
		post = -1;
		return post;
	} else {
		for (i = 0; i <= s.len - p.len; ++i) {
			flag = 1;
			for (j = 0; j < p.len; ++j) {
				if (s.string[i + j] != p.string[j]) {
					flag = 0;
					continue;
				}
			}
			post = i;
			if (flag == 1)
				return post;
				
		}
	}
	post = -1;
	return post;

}	

int main()
{
	str input_string, pattern;
	int p;
	printf("please input a string:\n");
	// scanf %s 读取个字符串
	//scanf("%s", input_string.string);
	gets(input_string.string);
	printf("please input the pattern:\n");
	//scanf("%s", pattern.string);
	gets(pattern.string);
	printf("string is %s\npattern is %s\n", input_string.string, pattern.string);
	input_string.len = strlen(input_string.string);
	pattern.len = strlen(pattern.string);
	p = findstr(input_string, pattern);
	printf("p = %d\n", p);
	if (p == -1)
		printf("No, matching!\n");
	else
		printf("Matching! the postion is %d.\n", p);
	return 0;
}	

