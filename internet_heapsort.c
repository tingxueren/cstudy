#include <stdio.h>

//生成大根堆
 void HeapAdjust(int SortData[],int StartIndex, int Length)
 {
     while(2*StartIndex+1 < Length)
     {
         int MinChildrenIndex = 2*StartIndex+1 ;
         if(2*StartIndex+2 < Length )
         {
             //比较左子树和右子树，记录最大值的Index
             if(SortData[2*StartIndex+1]<SortData[2*StartIndex+2])
             {
                 MinChildrenIndex = 2*StartIndex+2;
             }
         }
         if(SortData[StartIndex] < SortData[MinChildrenIndex])
         {
             //交换i与MinChildrenIndex的数据
             int tmpData =SortData[StartIndex];
             SortData[StartIndex] =SortData[MinChildrenIndex];
             SortData[MinChildrenIndex] =tmpData;
             //堆被破坏，需要重新调整
             StartIndex = MinChildrenIndex ;
         }
         else
         {
             //比较左右孩子均大则堆未破坏，不再需要调整
             break;
         }
     }
 
     return;
 }
 
 //堆排序
 void HeapSortData(int SortData[], int Length)
 {
     int i=0;
 
     //将Hr[0,Lenght-1]建成大根堆
     for (i=Length/2-1; i>=0; i--)
     {
         HeapAdjust(SortData, i, Length);
     }
 
     for (i=Length-1; i>0; i--)
     {
         //与最后一个记录交换
         int tmpData =SortData[0];
         SortData[0] =SortData[i];
         SortData[i] =tmpData;
         //将H.r[0..i]重新调整为大根堆
         HeapAdjust(SortData, 0, i);
     }
   
     return;
 }

void main(void)
{
	int a[10] = {9, 0, 9, 3, 2, 9, 4, 0, 3, 3 };
	int i;
	for (i = 0; i < 10; i++) {
		printf("%d\t", a[i]);
	}
	printf("\n");
	HeapSortData(a, 10);
	for (i = 0; i < 10; i++) {
		printf("%d\t", a[i]);
	}
	return;

}	
