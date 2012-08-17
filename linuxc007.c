#include <stdio.h>

int singlenum(int x)
{
	return x%10;
	
}

int tenum(int x)
{
      return ( (x%100 )- singlenum(x))/10 ;
     
}

int main(void)
{
	int n;
	printf("请输入数字:\n");
	scanf("%d",&n);
	printf("十位数字是:%d\n个位数字是:%d\n",tenum(n),singlenum(n));
        return 0;
}

