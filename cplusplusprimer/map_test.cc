/*
 * =====================================================================================
 *
 *       Filename:  map_test.cc
 *
 *    Description:  map test
 *
 *        Version:  1.0
 *        Created:  11/22/2012 08:54:49 PM
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
#include <map>
#include <string>

using namespace std;

// ===  FUNCTION  ======================================================================
//         Name:  main
//  Description:  main function
// =====================================================================================
int main(int argc, char *argv[])
{
	ifstream fin("test.cc");
	string word;
	map<string, int> word_count;
	
	while (fin >> word)
		++word_count[word];
	for (map<string, int>::iterator iter = word_count.begin();
			iter != word_count.end(); ++iter)
		cout << iter->first << "\t" << iter->second << endl;

	cout << "\nProgram " << argv[0] << endl << endl;

	return EXIT_SUCCESS;
}				// ----------  end of function main  ---------- 
