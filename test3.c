#include <stdio.h>

int main(void)
{
	FILE *fp = fopen("newfile", "w");
	fputs("hello world\n", fp);
	return 0;
}	

