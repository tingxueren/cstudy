/*
 * =====================================================================================
 *
 *       Filename:  072.c
 *
 *    Description:  072
 *
 *        Version:  1.0
 *        Created:  06/14/2013 09:53:50 PM
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

int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 30, 40, 50, 60};
int num = sizeof(a) / sizeof(a[0]);

int find(int *p, int key)
{
	int i;
	for (i = 0; i < num; ++i)
		if (*(p + i) == key)
			return i;
}	

int main()
{
	int i, key;
	printf("The elements of array a:\n");
	for (i = 0; i < num; ++i)
		printf("%d ", a[i]);
	printf("num = %d\n", num);
	printf("\nThe address of a[0] is:%d\n", &a[0]);
	printf("\nPlease input the key number you want to search: ");
	scanf("%d", &key);
	i = find(a, key);
	if (i == num) {
		printf("The %d is not in array!!!\n", key);
		return 0;
	}
	printf("The label number of the key number %d in the array is: %d\n", key, i);
	printf("The point value of the key number %d in the array is: %d\n", key, a+i);
	return 0;
}	
