/* main.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "readlines.h"
#include "writelines.h"
#include "qsort.h"

#define MAXLINES 5000 /* max #lines to be sorted */

char *lineptr[MAXLINES]; /* pointers to text lines */


int main(void)
{
	int nlines; /* number of input lines read */
	if ((nlines = readlines(lineptr, MAXLINES)) >= 0) {
		writelines(lineptr, nlines);
		quicksort(lineptr, 0, nlines -1);
		writelines(lineptr, nlines);
		return 0;
	} else {
		printf("error: input too big to sort\n");
		return -1;
	}


}	


