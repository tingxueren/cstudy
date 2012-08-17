/* open_file.cpp */
#include "open_file.hpp"
using namespace std;

ifstream& open_file(ifstream &in, const string &file)
{
	in.close();
	in.clear();
	in.open(file.c_str());
	return in;

}	
