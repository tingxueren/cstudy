/*
 * =====================================================================================
 *
 *       Filename:  Point.c
 *
 *    Description:  Point
 *
 *        Version:  1.0
 *        Created:  Friday 05 July 2013 08:57:19  CST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhang Dongsheng (mars), zhangdongsheng1224@gmail.com
 *   Organization:  HANGZHOU DIANZI UNIVERSITY
 *
 * =====================================================================================
 */

#include <math.h>
#include <Point.h>

float distance(point a, point b)
{
	float dx = a.x -b.x, dy = a.y - b.y;
	return sqrt(dx * dx + dy * dy);
}	
