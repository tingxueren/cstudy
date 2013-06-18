/*
 * =====================================================================================
 *
 *       Filename:  034.c
 *
 *    Description:  034
 *
 *        Version:  1.0
 *        Created:  06/07/2013 09:12:58 PM
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
	char cString[100];
	int index, count = 0;
	
	gets(cString);
	if (cString[0] == '\0')
		printf("There is no char!\n");
	else if (cString[0] == ' ' || cString[0] == '\t')
		printf("There first char just a blank!\n");
	for (index = 0; cString[index] != '\0'; ++index) {
		if (cString[index] != ' ' && cString[index] != '\0' && (cString[index+1] == ' ' || cString[index+1] == '\t' || cString[index+1] == '\0'))
			count++;

	}
	printf("There is %d word%c\n", count, (count > 1 ? 's' : ' '));
	return 0;
}	
