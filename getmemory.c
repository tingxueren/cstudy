#include <stdio.h>
#include <stdlib.h>
#include <string.h>

	 
int  main(void)
{
	char *str;
	str = (char *)malloc(sizeof(char) * 100);
	strcpy(str, "Hello, world.");
	printf("%s\n",str);
	return 0;
} 
	 
	 
	   
	   
