#include <stdio.h>

int main(void) 
{
	char *str = "25	Dec 2011";
	int day, year;
	char monthname[20];

	sscanf(str, "%d %s %d", &day, monthname, &year);
	printf("\n%d\t%s\t%d\n", day, monthname, year);
	return 0;
}	
