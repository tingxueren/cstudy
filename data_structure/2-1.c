/*
 * =====================================================================================
 *
 *       Filename:  2-1.c
 *
 *    Description:  2-1
 *
 *        Version:  1.0
 *        Created:  03/23/2013 07:24:23 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhang Dongsheng (mars), zhangdongsheng1224@gmail.com
 *   Organization:  HANGZHOU DIANZI UNIVERSITY
 *
 * =====================================================================================
 */


#include <errno.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct student {
	int id;
	char name[10];
	float score;

} Student;

int search(Student stu[], int n, int key)
{
	int i;
	for (i = 0; i < n; i++) {
		if (stu[i].id == key)
			return i;
	}
	return -1;
}	



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  main function
 * =====================================================================================
 */
int main(int argc, char *argv[])
{
	Student stu[4] = {{1004, "TOM", 100}, {1002, "LILY", 95}, {1001, "ANN", 93}, {1003, "LUCY", 98}};
	int addr;
	addr = search(stu, 4, 1001);
	printf("addr = %d\n", addr);
	printf("Student ID: %d\n", stu[addr].id);
	printf("Student name: %s\n", stu[addr].name);
	printf("Student score: %f\n", stu[addr].score);
	printf("\nProgram %s\n\n", argv[0]);

	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

