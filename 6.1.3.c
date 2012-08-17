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
	int i, n, m;
	int k=0;
	printf("统计从1~n(n<=100)中的数字,m数字出现的次数.\n");
	printf("请输入n和m的值:\n");
	scanf ("%d %d",&n, &m);
	for(i=1;i<=n;i++)
		{
			if((singlenum(i) == m)&&(singlenum(i) != 0))  k++;
			if((tenum(i) == m)&&(tenum(i) != 0)) k++;
		}
	printf("%d in 1~%d,%d times.\n",m, n, k);
        return 0; 
}
