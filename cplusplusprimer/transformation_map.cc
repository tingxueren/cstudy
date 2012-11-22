/*
 * =====================================================================================
 *
 *       Filename:  transformation_map.cc
 *
 *    Description:  transformation with map
 *
 *        Version:  1.0
 *        Created:  11/22/2012 09:22:45 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhang Dongsheng (mars), zhangdongsheng1224@gmail.com
 *   Organization:  HANGZHOU DIANZI UNIVERSITY
 *
 * =====================================================================================
 */

#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <map>
#include <string>
#include <stdexcept>
#include "open_file.h"

using namespace std;

// ===  FUNCTION  ======================================================================
//         Name:  main
//  Description:  main function
// =====================================================================================
int main(int argc, char *argv[])
{
	map<string, string> trans_map;
	string key, value;
	if (argc != 3)
		throw runtime_error("wrong number of arguments");
	ifstream map_file;
	if (!open_file(map_file, argv[1]))
		throw runtime_error("no transformation file");
	while (map_file >> key >> value)
		trans_map.insert(make_pair(key, value));

//	for (map<string, string>::iterator iter = trans_map.begin();
//			iter != trans_map.end();
//			++iter)
//		cout << iter->first << "\t" << iter->second << endl;
//
	ifstream input;
	if (!open_file(input, argv[2]))
		throw runtime_error("no input file");
	string line;

	while (getline(input, line)) {
		istringstream stream(line);
		string word;

		bool firstword = true;
		while (stream >> word) {
			map<string, string>::const_iterator map_it = trans_map.find(word);
			if (map_it != trans_map.end())
				word = map_it->second;
			if (firstword)
				firstword = false;
			else
				cout << " ";
			cout << word;
		}
		cout << endl;
	}
	return EXIT_SUCCESS;
}				// ----------  end of function main  ---------- 

