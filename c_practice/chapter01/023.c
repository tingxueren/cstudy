/*
 * =====================================================================================
 *
 *       Filename:  023.c
 *
 *    Description:  023
 *
 *        Version:  1.0
 *        Created:  06/06/2013 09:11:03 PM
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
	int i, j, k;
	printf("1\t2\t5\n");
	//for (i = 0; i <= 10; ++i) {
	//	for (j = 0; i <= 5; ++j) {
	//		for (k = 0; k <= 2; ++k) {
	//			if (i + 2 * j + 5 * k == 10)
	//				printf("%d\t%d\t%d\n", i, j, k);
	//		}
	//	}
	//}
	for (i = 0; i <= 10; ++i) 
		for (j = 0; j <= 5; ++j) 
			for (k = 0; k <= 2; ++k) 
				if (i + 2 * j + 5 * k == 10)
					printf("%d\t%d\t%d\n", i, j, k);
	return 0;
}	
