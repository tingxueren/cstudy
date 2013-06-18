/*
 * =====================================================================================
 *
 *       Filename:  082.c
 *
 *    Description:  082
 *
 *        Version:  1.0
 *        Created:  06/18/2013 07:52:40 PM
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

struct student
{
	int num;
	char name[20];
	float score;
};

int main()
{
	int i, m;
	struct student stu[5] = {
		{101, "liming", 89},
		{102, "zhanghong", 95},
		{103, "lili", 89},
		{104, "weichen", 85},
		{105, "yangfan", 75},
	};
	m = 0;
	for (i = 1; i < 5; ++i) {
		if (stu[i].score > stu[0].score)
			m = i;
	}
	printf("The maxmum score is: %.2f\nThe student number is: %d\nThe student name is: %s\n", stu[m].score, stu[m].num, stu[m].name);
	return 0;
}	

