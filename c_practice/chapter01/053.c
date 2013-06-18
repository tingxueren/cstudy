/*
 * =====================================================================================
 *
 *       Filename:  053.c
 *
 *    Description:  052
 *
 *        Version:  1.0
 *        Created:  06/09/2013 08:32:22 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhang Dongsheng (mars), zhangdongsheng1224@gmail.com
 *   Organization:  HANGZHOU DIANZI UNIVERSITY
 *
 * =====================================================================================
 */

#include <stdio.h>

int main()
{
	int cock, hen, chick;
	for (cock = 0; cock <= 20; ++cock)
		for (hen = 0; hen <= 33; ++hen)
			for (chick = 0; chick <= 300; chick = chick + 3)
				if (cock + hen + chick == 100 && 5 * cock + 3 * hen + chick * 1 / 3 == 100)
					printf("cock: %d hen: %d chick: %d\n", cock, hen, chick);
	return 0;
}	
