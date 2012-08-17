#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <stdarg.h>
#include <string.h>

#define MAXLINE 80

void err_sys(const char *fmt, ...)
{
	int err = errno, n;
	char buf[MAXLINE];
	va_list ap;

	va_start(ap, fmt);

	vsnprintf(buf, MAXLINE, fmt, ap);
	n = strlen(buf);
	snprintf(buf+n, MAXLINE-n, ": %s", strerror(err));
	strcat(buf, "\n");
	fputs(buf, stderr);

	va_end(ap);
	exit(1);
}	

int main(int argc, char *argv[])
{
	FILE *fp;
	if (argc != 2) {
		fputs("Usage: ./a.out pathname\n", stderr);
		exit(1);
	}
	fp = fopen(argv[1], "r");
	if(fp = NULL)
		err_sys("%s, line %d - open file %s",__FILE__,
		__LINE__, argv[1]);
	printf("Open %s ok\n", argv[1]);
	fclose(fp);
	return 0;
}	

