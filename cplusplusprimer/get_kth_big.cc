/*
 * =====================================================================================
 *
 *       Filename:  get_kth_big.cc
 *
 *    Description:  get kth big number
 *
 *        Version:  1.0
 *        Created:  12/17/2012 02:43:37 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhang Dongsheng (mars), zhangdongsheng1224@gmail.com
 *   Organization:  HANGZHOU DIANZI UNIVERSITY
 *
 * =====================================================================================
 */

/**
线性时间复杂度求数组中第K大数
** author :liuzhiwei 
** data   :2011-08-07  
**/
#include <iostream>
#include <cstdlib>
using namespace std;

//基于快速排序思想，求数组a中第k大的数，low和high分别为数组的起始和结束位置
//时间复杂度为o(n)，n为数组的长度
//1<=k<=n
//如果存在，返回第k大数的下标，否则返回-1

int selectk(int a[], int low, int high, int k)
{
	if(k <= 0)
		return -1;
	if(k > high - low + 1)
		return -1;
	int pivot = low + rand()%(high - low + 1);    //随即选择一个支点
	swap(a[low], a[pivot]);
	int m = low;
	int count = 1;

	//一趟遍历，把较大的数放到数组的左边

	for(int i = low + 1; i <= high; ++i)
	{
		if(a[i] >= a[low]) 
		{
			swap(a[++m], a[i]);
			count++;              //比支点大的数的个数为count-1
		}
	}
	swap(a[m], a[low]);           //将支点放在左、右两部分的分界处
	if(count > k)
	{
		return selectk(a, low, m - 1, k);
	}
	else if( count < k)
	{
		return selectk(a, m + 1, high, k - count);
	}
	else
	{
		return m;
	}
}
int main(void)
{
	int a[] = {5, 15, 5, 7, 9, 17,100, 3, 12, 10, 19, 18, 1000, 10, 1000,1,1,1,1,1,1,1,1};
	int r = selectk(a, 0, sizeof(a) /sizeof(int) - 1, 15);
	cout<<(r == -1 ? r : a[r])<<endl;
	//system("pause");
	return 0;
}
