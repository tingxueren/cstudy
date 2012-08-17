/* writelines.c */
/* writelines: write output lines */
#include <stdio.h>
#include <stdlib.h>

void writelines(char *lineptr[], int nlines)
{
	int i;

	for (i = 0; i < nlines; i++)
		printf("%s\n", lineptr[i]);

}	
