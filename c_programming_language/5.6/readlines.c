/* radlines.c */
/* readlines: read input lines */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "getline.h"
#include "readlines.h"
#define MAXLEN 1000 /* max length of any input line */

int readlines(char *lineptr[], int maxlines)
{
	int len, nlines;
	char *p, line[MAXLEN];

	nlines = 0;
	while ((len = getlineown(line, MAXLEN)) > 0)
		if (nlines >= maxlines || p = malloc(len) == NULL)
			return -1;
		else {
			line[len - 1] = '\0'; /* delete newline */
			strcpy(p, line);
			lineptr[nlines++] = p;
		}
	return nlines;

}	


