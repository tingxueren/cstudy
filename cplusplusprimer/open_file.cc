/* open_file.cc */
#include "open_file.h"

ifstream& open_file(ifstream &in, const string &file)
{
	in.close();
	in.clear();
	in.open(file.c_str());
	return in;

}	
