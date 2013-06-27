/*
 * =====================================================================================
 *
 *       Filename:  086.c
 *
 *    Description:  086
 *
 *        Version:  1.0
 *        Created:  06/19/2013 04:39:04 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhang Dongsheng (mars), zhangdongsheng1224@gmail.com
 *   Organization:  HANGZHOU DIANZI UNIVERSITY
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/select.h>

int kbhit(void)
{
struct timeval tv;
fd_set read_fd;

/* Do not wait at all, not even a microsecond */
tv.tv_sec=0;
tv.tv_usec=0;

/* Must be done first to initialize read_fd */
FD_ZERO(&read_fd);

/* Makes select() ask if input is ready:
* 0 is the file descriptor for stdin */
FD_SET(0,&read_fd);

/* The first parameter is the number of the
* largest file descriptor to check + 1. */
if(select(1, &read_fd,NULL, /*No writes*/NULL, /*No exceptions*/&tv) == -1)
return 0; /* An error occured */

/* read_fd now holds a bit map of files that are
* readable. We test the entry for the standard
* input (file 0). */

if(FD_ISSET(0,&read_fd))
/* Character pending on stdin */
return 1;

/* no characters were pending */
return 0;
}

struct time
{
	int hour;
	int minute;
	int second;
} t;

int main()
{
	FILE *fp;
	fp = fopen("Time", "r");
	fread(&t, sizeof(struct time), 1, fp);

	while (!kbhit()) {
		rewind(fp);
		sleep(1);
		fread(&t, sizeof(struct time), 1, fp);
		if (t.second == 59) {
			t.minute++;
			if (t.minute == 60) {
				t.hour++;
				t.minute = 0;
			}
			t.second = 0;
		}
		else 
			t.second++;
		printf("%d:%d:%d\n", t.hour, t.minute, t.second);
		fp = fopen("Time", "w");
		fwrite(&t, sizeof(struct time), 1, fp);
		fclose(fp);
	}
	return 0;
}	

