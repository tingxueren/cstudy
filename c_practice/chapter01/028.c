/*
 * =====================================================================================
 *
 *       Filename:  028.c
 *
 *    Description:  028
 *
 *        Version:  1.0
 *        Created:  06/07/2013 09:07:51 AM
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
	int i, n, v0 = 0, v1 = 0, v2 = 0, v3 = 0, a[50];
	printf("Please input the number of electorate: \n");
	scanf("%d", &n);

	for (i = 0; i < n; ++i) {
		scanf("%d", &a[i]);
		if (a[i] == 1)
			v1++;
		else if (a[i] == 2)
			v2++;
		else if (a[i] == 3)
			v3++;
		else
			v0++;
	}

	printf("The Result:\n");
	printf("candidate1: %d\ncandidate2: %d\ncandidate3: %d\nonuser: %d\n", v1, v2, v3, v0);
	return 0;
	
}	
