/*
 * =====================================================================================
 *
 *       Filename:  032.c
 *
 *    Description:  032
 *
 *        Version:  1.0
 *        Created:  06/07/2013 08:02:57 PM
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
#define MAX 50

int main()
{
	int i, j, n;
	long StudentID[MAX];
	int score[MAX][3];
	float average[MAX];

	printf("Please input the number of students:\n");
	scanf("%d", &n);
	printf("Please input a StudentID and three scores:\nStudentID\tChinese\tMath\tEnglish\n");
	for (i = 0; i < n; ++i) {
		printf("NO.%d>", i+1);
		scanf("%ld%d%d%d", &StudentID[i], &score[i][0], &score[i][1], &score[i][2]);
		average[i] = (score[i][0] + score[i][1] + score[i][2]) / 3.0;
		
	}
	printf("\nStudentNum\tChinese\tMath\tEnglish\tAverage\n");

	for (i = 0; i < n; ++i) {
		printf("%-ld\t", StudentID[i]);
		for (j = 0; j < 3; ++j)
			printf("%d\t", score[i][j]);
		printf("%f\n", average[i]);
		
	}
	return 0;
}	
