#include <stdio.h>

int main(void)
{
	const char *p = "abcd";
	const char str1[5] = "abcd";
	char str2[5] = "abcd";
	printf("%s\n",p);
	printf("%s\n",str1);
	printf("%s\n",str2);
	printf("abcd");
	return 0;
	}
