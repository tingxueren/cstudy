#include<stdio.h>
int main (void)
{
  int a,b,c;
  printf("请输入三个数字：\n");
  scanf("%d%d%d",&a,&b,&c);
  if((a<=0||a>=10000)||(b<=0||b>=10000)||(c<=0||c>=10000))
  {
  printf("输入出错，请重新输入：\n");
  scanf("%d%d%d",&a,&b,&c);
  }
  if（（a+b>c）&&(a+c>b)&&(b+c>a)）
  printf("能组成三角形。\n");
  else
  printf("不能组成三角形。\n");
  return 0;
} 