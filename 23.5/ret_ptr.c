/* ret_ptr.c */
#include <string.h>
#include "ret_ptr.h"

static const char *msg[] = {"Sunday", "Tuesday", "Wednesday", "Thursday",
	"Friday", "Saturday", "Sunday"};

char *get_a_day(int idx)
{
	static char buf[20];
	strcpy(buf, msg[idx]);
	return buf;
};


