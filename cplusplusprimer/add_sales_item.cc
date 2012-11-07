/*
 * =====================================================================================
 *
 *       Filename:  add_sales_item.cc
 *
 *    Description:  add sales item
 *
 *        Version:  1.0
 *        Created:  11/04/2012 09:04:26 PM
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
#include "./source/1/Sales_item.h"

using namespace std;

// ===  FUNCTION  ======================================================================
//         Name:  main
//  Description:  main function
// =====================================================================================
int main(int argc, char *argv[])
{
	Sales_item item1, item2;
	cin >> item1 >> item2;
	cout << item1 + item2 << endl;
	cout << "\nProgram " << argv[0] << endl << endl;

	return EXIT_SUCCESS;
}				// ----------  end of function main  ---------- 
