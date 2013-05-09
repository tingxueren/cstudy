/*
 * =====================================================================================
 *
 *       Filename:  find.cc
 *
 *    Description:  find
 *
 *        Version:  1.0
 *        Created:  04/09/2013 04:40:03 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhang Dongsheng (mars), zhangdongsheng1224@gmail.com
 *   Organization:  HANGZHOU DIANZI UNIVERSITY
 *
 * =====================================================================================
 */


#include <cstdlib>
#include <cmath>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <map>

using namespace std;

// ===  FUNCTION  ======================================================================
//         Name:  main
//  Description:  main function
// =====================================================================================
int main(int argc, char *argv[])
{
	int i, j, k, range;
	range = sqrt(999999);
	//cout << "range = " << range << endl;
	for (i = 1; i <= range; i++) {
		map<int, int> dig_count;
		int m = i * i;
		k = m;
		while (k) {
			j = k % 10;
			++dig_count[j];
			k = k / 10;
		}
		for (j = 0; j < 10; ++j) {
			//cout << j << " num is " << dig_count.find(j)->second << endl;
			// dig_count.find(j) 返回一个指向j这个键的迭代器，或返回dig_count.end()
			// dig_count.count(j) 只返回 0 或 1, j存在就是 1, 否则为 0
			if (dig_count.find(j) != dig_count.end() && dig_count.find(j)->second == 2) {
				cout << "num = " << m << endl;
				// break 必须放在括号里面，不要写python写的惯了忘记了
				break;
			
			}
		
		}

	}

	return EXIT_SUCCESS;
}				// ----------  end of function main  ---------- 
