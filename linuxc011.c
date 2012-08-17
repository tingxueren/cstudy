#include <stdio.h>

int fib(int n)
{
	int F, I, J;
        if(n == 1||n == 0) F = 1;
           else	
		{   I = fib(n-1);
	            J = fib(n-2);
	            F = I + J;
	         }        

        return F; 
}

int main(void)
{       
	int i;
	int k;
	printf("please input number:\n");
	scanf("%d",&k);
	for(i=0; i<=k; i++)
	{
	   printf("%d ",fib(i));
	   if(i%10 == 0)
	   printf("\n");	   
	  }
	 return 0;  
}
