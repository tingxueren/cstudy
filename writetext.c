/* write test.txt */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct record {
	int sequence;
	char day[20];
	char time[20]
};

int main(void)
{
	struct record array;
	array.sequence = 0;
	while (1) {
	FILE *fp = fopen("test.txt", "w");
	if (fp == NULL) {
		perror("Open file test.txt");
		exit(1);
	}
	struct tm *p = localtime(const time(NULL));
	array.sequence += 1;
	array.day[20] = "p->tm_year-p->tm_mon-p->tm_mday";
	array.time[20] = "p->tm_hour:p->tm_min:p->tm_sec";
	fwrite(array, sizeof(struct record), 1, fp);
	sleep(1);
	}
	return 0;
}	
