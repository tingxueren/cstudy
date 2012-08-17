
#include<stdio.h>
int  main()
{

	int n,m;
	scanf("%d",&n);

	while(n<0)
	{printf("请输入正整数！谢谢合作！\n");
	  scanf("%d",&n);
	}
	if(n<=9&&n>=0)
	   m=1;
        else
	   {
		 m=0;
		 while(n>=1)
		   {
			  n=n/10;
			  m++;
		    }
								      
             }
		             
      printf("%d\n",m);
      return 0;  
}


