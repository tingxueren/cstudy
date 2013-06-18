/*
 * =====================================================================================
 *
 *       Filename:  083.c
 *
 *    Description:  083
 *
 *        Version:  1.0
 *        Created:  06/18/2013 08:07:36 PM
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
	struct student_score {
		int mid;
		int end;
		int ave;
	} score;
	printf("Please input score < mid term and end of term>: ");
	scanf("%d,%d", &score.mid, &score.end);
	score.ave = (score.mid + score.end) / 2;
	printf("average = %d\n", score.ave);
	return 0;
}	
