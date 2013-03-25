/*
 * =====================================================================================
 *
 *       Filename:  sieve_prime.cc
 *
 *    Description:  find prime number use sieve
 *
 *        Version:  1.0
 *        Created:  03/12/2013 04:58:38 PM
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
using namespace std;
int main()
{
	int num[100];
	for (int i = 0; i < 100; i++)
		num[i] = i + 1;
	for (int i = 2; i < 100; i++) {
		if (num[i] % 2 == 0)
			num [i] = 0;
	}
		
	for (int i = 3; i < 100; i++) {
		if (num[i] != 0 && num[i] % 3 == 0)
			num [i] = 0;
	}
	for (int i = 5; i < 100; i++) {
		if (num[i] != 0 && num[i] % 5 == 0)
			num [i] = 0;
	}
	for (int i = 7; i < 100; i++) {
		if (num[i] != 0 && num[i] % 7 == 0)
			num [i] = 0;
	}
	
	int j = 0;
	for (int i = 1; i < 100; i++) {
		if (num[i] != 0) {
			cout << num[i] << "\t";
			j++;
			if (j % 5 == 0)
				cout << endl;
		
		}
				
	}
	return 0;

}	
