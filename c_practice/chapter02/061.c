/*
 * =====================================================================================
 *
 *       Filename:  061.c
 *
 *    Description:  061
 *
 *        Version:  1.0
 *        Created:  06/13/2013 07:30:54 PM
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

struct student
{
	int num;
	char name[20];
	char sex;
	int age;
	float score;
};

int main()
{
	struct student stu = {1001, "liming", 'M', 20, 92.5};
	struct student *p;
	p = &stu;
	printf("Number:%d\n", p->num);
	printf("Name:%s\n", p->name);
	printf("Sex:%c\n", p->sex);
	printf("Age:%d\n", p->age);
	printf("Score:%f\n", p->score);
	return 0;
}	
