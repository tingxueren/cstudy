/* make_plural.cc */
#include "make_plural.h"

string make_plural(size_t ctr, const string &word, const string &ending) 
{
	return (ctr == 1) ? word : word + ending;
}	
