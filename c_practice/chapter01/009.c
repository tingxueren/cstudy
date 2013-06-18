/*
 * =====================================================================================
 *
 *       Filename:  009.c
 *
 *    Description:  009
 *
 *        Version:  1.0
 *        Created:  06/06/2013 12:31:02 PM
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
	int stair;
	for (stair = 100; stair < 1000; ++stair) {
		if ((stair % 2 == 1) && (stair % 3 == 2) && (stair % 5 == 4) && (stair % 7 == 0))
			printf ("The num of stairs is %d\n", stair);

	}
	return 0;
}	
