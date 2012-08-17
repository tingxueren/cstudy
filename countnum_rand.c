#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 1000
#define M 10000

int a[N], count[10];

void putnum()
{
	int i;
	srand(time(NULL));
	for (i = 0; i < N; i++)
	{
		a[i] = rand()%M;
		printf("%d\t",a[i]);
		if((i+1)%10 == 0) printf("\n");
		}
}

int main(void)
{
	int b, i;
	putnum();	
	for (i = 0; i < N; i++)
	{
		b = a[i];
		do
		{
			count[b%10]++;
			b = b/10;
			
		        }while(b !=0);
            }
	for (i = 0; i < 10; i++)	
		printf("%d is %d times.\n", i, count[i]);

	return 0;
}

