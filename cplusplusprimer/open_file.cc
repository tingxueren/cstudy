/* open_file.cpp */
#include "open_file.h"
#include <fstream>
using namespace std; //其他的头文件可以不写这些要写上 

ifstream& open_file(ifstream &in, const string &file)
{
	in.close();
	in.clear();
	in.open(file.c_str());
	return in;

}	
