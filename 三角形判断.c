#include<stdio.h>
int main (void)
{
  int a,b,c;
  printf("�������������֣�\n");
  scanf("%d%d%d",&a,&b,&c);
  if((a<=0||a>=10000)||(b<=0||b>=10000)||(c<=0||c>=10000))
  {
  printf("����������������룺\n");
  scanf("%d%d%d",&a,&b,&c);
  }
  if����a+b>c��&&(a+c>b)&&(b+c>a)��
  printf("����������Ρ�\n");
  else
  printf("������������Ρ�\n");
  return 0;
} 