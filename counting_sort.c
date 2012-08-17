/* counting_sort.c */
#include <stdio.h>
#include <stdlib.h>
#include "counting_sort.h"

void countingsort(int a[], int b[], int LEN, int M)
{
	int i, c[M];
#if 0   /*  求a[] 中元素个数
	 * 不能用 len = sizeof(a) / sizeof(a[0]) 
	 * 数组在传递时为指针,此时a相当与指向原来数组的指针 
	 * 可以用来访问但是sizeof(a)  为指针的大小,单位Bit
	 * 非引用是可以用此方法求数组长度
	 */
	i = 0;
	while (a[i] != '\0')
		i++;
	printf("%d\n", i);
#endif
	for (i = 0; i < M; i++) 
		c[i] = 0;

	for (i = 0; i < LEN; i++)
		c[a[i]]++;

	for (i = 1; i < M; i++) 
		c[i] = c[i] + c[i-1];
		
	for (i = LEN - 1; i >= 0; i--) {
		b[c[a[i]] - 1] = a[i]; /* 数字b[i]从0开始, 要减去1 */
		c[a[i]]--;
	}

}	
