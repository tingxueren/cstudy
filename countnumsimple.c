#include <stdio.h>

int main(void)
{
	int n = 0, m = 0;
	do{
		scanf("%d %d", &n, &m);
	} while (n >=100 && n<=0);
	int i = 1, k = 0;
	for(;i <= n; i++) {
		
		if (i%10 == m) k++;		
		if (i/10 == m) k++;
	}

	printf("%d\n", k);
}
