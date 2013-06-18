/*
 * =====================================================================================
 *
 *       Filename:  010.c
 *
 *    Description:  010
 *
 *        Version:  1.0
 *        Created:  06/06/2013 12:40:07 PM
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
	int score;
	char grade;
	printf("Please enter score(score <= 100):");
	scanf("%d", &score);
	if (score >= 90)
		grade = 'A';
	else if (score >= 80)
		grade = 'B';
	else if (score >= 70)
		grade = 'C';
	else if (score >= 60)
		grade = 'D';
	else
		grade = 'E';
	printf("The grade is %c\n", grade);
	return 0;
}	
