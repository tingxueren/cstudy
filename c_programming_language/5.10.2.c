#include <stdio.h>

/* echo command-line arguments; 2nd version */
int main(int argc, char *argv[])
{
	while (--argc > 0)   /* argc = 1, 此时while 条件不成立,不执行 */ 
		printf("%s%s",  *++argv, (argc > 1) ? " " : "");
	printf("\n");
	return 0;

}	
