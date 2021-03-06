/* max_heapify.c */
/*  保持以A[i]为根的A[i ~ (length - 1)]保持大顶堆的性质 */
/*  假定A[i]左右子树都是大顶堆 */
#include <stdio.h>
#include "max_heapify.h"

void max_heapify(int *p, int startindex, int length)
{
	while (2*startindex + 1 < length) {
        int maxchildindex = 2*startindex + 1;
        if (2*startindex + 2 < length) {
            if (p[2*startindex + 2] > p[2*startindex + 1]) {
                maxchildindex = 2*startindex + 2;
            }
        }
        if (p[maxchildindex] > p[startindex]) {
            int tmp = p[maxchildindex];
            p[maxchildindex] = p[startindex];
            p[startindex] = tmp;
            startindex = maxchildindex;
        }
        else {
            break;
        }

        //return; 程序在此处出错了，return位置问题。
    }
    return; /* return 位置很重要，程序运行到此处结束，不能放在循环体内，否则循环会结束 */
             /* 而不进行循环 */
}
