#include <stdio.h>

int gcd(int a, int b)
{
	if(a%b == 0)
		return b;
	else
		gcd(b, a%b);
}

int main(void)
{
	int x, y;
        printf("please input x:\n");
	scanf("%d",&x);
        printf("please input y:\n");
	scanf("%d",&y);
	printf("the gcd of x and y is :%d.\n",gcd(x,y));
	return 0;
}
