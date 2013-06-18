/*
 * =====================================================================================
 *
 *       Filename:  029.c
 *
 *    Description:  029
 *
 *        Version:  1.0
 *        Created:  06/07/2013 11:43:55 AM
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
	int i, j, n;
	float score[n][5], total;

	printf("Enter the number of players:\n");
	scanf("%d", &n);

	for (i = 0; i < n; ++i) {
		printf("now player %d\nplease input score:\n", i + 1);
		for (j = 0; j < 5; ++j)
			scanf("%f", &score[i][j]);
	}
	printf("player\tjudgeA\tjudgeB\tjudgeC\tjudgeD\tjudgeE\ttotal\n");
	for (i = 0; i < n; ++i) {
		printf("player%d", i + 1);
		total = 0;
		for (j = 0; j < 5; ++j) {
			total += score[i][j];
			printf("%.1f\t", score[i][j]);
		}
		printf("%.1f\n", total);
		
	}
	return 0;
	
}	
