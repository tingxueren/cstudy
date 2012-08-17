/* getline.c */
/* getline: read aline into s, return length */
#include <stdio.h>
#include <stdlib.h>
#include "getline.h"

int getlineown(char *s, int lim)
{
	int c, i;
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
		s[i] = c;
	if (c == '\n') {
		a[i] = c;
		i++;	
	}
	s[i] = '\0';
	return 0;

}	



