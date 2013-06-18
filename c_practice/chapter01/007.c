/*
 * =====================================================================================
 *
 *       Filename:  007.c
 *
 *    Description:  007
 *
 *        Version:  1.0
 *        Created:  06/06/2013 12:13:54 PM
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
	float salary = 500;
	int k;
	int profit;
	printf("输入员工销售额：");
	scanf("%d", &profit);
	if (profit % 1000 == 0)
		k = profit / 1000;
	else
		k = profit / 1000 + 1;
	switch (k) {
		case 0:
		case 1:
		case 2: break;
		case 3:
		case 4:
		case 5:
			salary += profit * 0.08;
			break;
		case 6:	
		case 7:	
		case 8:	
		case 9:	
		case 10:
			salary += profit * 0.1;
			break;
		default:	
			salary += profit * 0.12;
			break;
			
	}
	printf("员工工资为: %5.2f\n", salary);
	return 0;

}	
