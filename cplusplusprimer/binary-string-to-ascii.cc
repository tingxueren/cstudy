/*
 * =====================================================================================
 *
 *       Filename:  ascill.cc
 *
 *    Description:  ascill
 *
 *        Version:  1.0
 *        Created:  11/11/2012 08:17:07 PM
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
#include <string>
#include <math.h>

using namespace std;

// ===  FUNCTION  ======================================================================
//         Name:  main
//  Description:  main function
// =====================================================================================
int main(int argc, char *argv[])
{
	ifstream fin("A.txt");
	ofstream fout("B.out");
	string cstring;
	char cint;
	while(fin >> cstring) {
		// cint 初始化为 null
		cint = '\0';
		for (int i = 0; i < 8; ++i) {
			cint += (cstring[i] - '0') * pow(2, 7-i);
		}
		fout << cint;	
	}

	
	//const char *c1 = cstring.c_str();
	//int m = atoi(c1);
	//cout << "m is "  << m << endl;
	//cout << endl;
	//char c = 01000111;
	//cout << "c is " << c << endl;

	//cout << "string is " << cstring << endl;
	//cout << "cint is " << cint << endl;
	//cout << "cint is " << cint << endl;
	//while (fin >> c)
	//	fout << c;
        //	cout << "\nProgram " << argv[0] << endl << endl;

	return EXIT_SUCCESS;
}				// ----------  end of function main  ---------- 
