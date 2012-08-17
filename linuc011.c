#include <stdio.h>

int fibonacci(int n)
{
	fibonacci(0) = 1;
	fibonacci(1) = 1;
	fibonacci(n) = fibonacci(n-1) + fibonacci(n-2);

}

int main(void)
{
	int k;
	int i;
	printf("please input number:\n", k);
	scanf("%d",&k);
	for(i=1; i<=k; i++)
	{
	   printf("%d ",fibonacci(i));
	   if(i%10 == 0)
	   printf("\n");	   
	  }
	 return 0;  
}
