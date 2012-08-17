#include <stdio.h>
#define N 10

/*
函数功能：求一个整数的第K位的值 
函数原型：int digitk(int no,int k)
函数参数：
函数返回值：返回数据的位数 
作者 ：  李文塔 Wenta Li 
日期：    2008年5月21日 11：19 
*/
int digitk(int no,int k)
{
  int i,j,m;
  if(k==0)
  {
  return no%10;
  }
  else
  {
  for(j=0;j<k;j++)
  {
    if(j==0)
    {
    m=10;
    }
    else
    {
      m=m*10;
    }
  }
  i=(int)((no/m)%10);
  return i;
  }
}
/*
函数功能：求一个数据的整数位数，0表示一位，N表示N+1位； 
函数原型：int big_digit(int no)
函数参数：int no no为戴求的数据
函数返回值：返回数据的位数 
作者 ：  李文塔 Wenta Li 
日期：    2008年5月21日 11：19 
*/
int big_digit(int no)
{
   int m,n;
   if(no < 10)
   {
   return 0;
    }
    m=0;
   while(no>9)
   {
      no=no/10;
      m++;
    }  
    return m; 
}
/*
函数功能：基数排序算法 
函数原型：void ridax_sort(int *a,int n)
函数参数：int *a 待排序数组的首地址 
          int n n为数组的元素数目 
函数返回值：void 
作者 ：  李文塔 Wenta Li 
日期：    2008年5月21日 11：19 
*/
void ridax_sort(int *a,int n)
{
  int i,j,k,index,no,maxno,digitnum;
  int nocount[10]={0};
  int noarray[n][10];
  maxno=maxNumber(a,N);
  digitnum=big_digit(maxno);
  for(i=0;i<digitnum;i++)
  {
  
  for(j=0;j<=9;j++)
  { 
    nocount[j]=0;
  }
   
  for(j=0;j<n;j++)
  {
     no=digitk(a[j],i);
     noarray[no][nocount[no]]=a[j];
     nocount[no]=nocount[no]+1;
   }
   
 
   index = 0;
   for(j=0;j<10;j++)
   {
    for(k=0;k<nocount[j];k++)
    {
     a[index]=noarray[j][k];
     index++;
    }
   } 
   }
  
}
/*
函数功能：求一个整形数组的最大值 
函数原型：int maxNumber(int *a,int n)
函数参数：int *a 
          int n n为数组的元素数目 
函数返回值：最大值 
作者 ：  李文塔 Wenta Li 
日期：    2008年5月21日 11：19 
*/
int maxNumber(int *a,int n)
{
  int i,max;
  max=a[0];
  for(i=1;i<n;i++)
  {
  if(a[i]>max)
  {
    max=a[i];     
  }
  }
  return max;
}

int a[N]={12,78,895,24,158,369,58,621,1475,2};

 

int main()
{
    int i;
   printf("排序前数组序列：/n");
   for(i=0;i<N;i++)
   {
      printf("%5d",a[i]);
   }
   
   printf("/n排序前数组序列：/n");
   ridax_sort(a,N);
   for(i=0;i<N;i++)
   {
      printf("%5d",a[i]);
   }  
  
  getch();
}
