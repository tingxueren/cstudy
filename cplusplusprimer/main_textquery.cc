/*
 * =====================================================================================
 *
 *       Filename:  main_textquery.cc
 *
 *    Description:  main_textquery.cc
 *
 *        Version:  1.0
 *        Created:  11/25/2012 04:40:44 PM
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
#include "open_file.h"
#include "textquery.h"
#include "make_plural.h"

using namespace std;

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  print_results
 *  Description:  
 * =====================================================================================
 */
	void
print_results (const set<TextQuery::line_no>& locs,
		const string& sought, const TextQuery &file)
{
	typedef set<TextQuery::line_no> line_nums;
	line_nums::size_type size = locs.size();
	cout << "\n" << sought << " occurs "
		<< size << " " 
		<< make_plural(size, "time", "s") << endl;
	line_nums::const_iterator it = locs.begin();
	for (; it != locs.end(); ++it) {
		cout << "\t(line "
			<< (*it) + 1 << ") "
			<< file.text_line(*it) << endl;
	
	}
}		/* -----  end of function print_results  ----- */

// ===  FUNCTION  ======================================================================
//         Name:  main
//  Description:  main function
// =====================================================================================
int main(int argc, char *argv[])
{
	ifstream infile;
	if (argc < 2 || !open_file(infile, argv[1])) {
		cerr << "No input file!" << endl;
		return EXIT_FAILURE;
	
	}
	TextQuery tq;

	tq.read_file(infile);
	while (true) {
		cout << "enter word to look for, or q to quit: ";
		string s;
		cin >> s;
		if (!cin || s == "q") break;
		set<TextQuery::line_no> locs = tq.run_query(s);
		print_results(locs, s, tq);
		
	
	}
	cout << "\nProgram " << argv[0] << endl << endl;

	return EXIT_SUCCESS;
}				// ----------  end of function main  ---------- 
