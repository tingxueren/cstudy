#include <iostream>
#include <string>
using namespace std;

int main()
{
	string preWord, currWord;
	string repWord;
	int currCnt = 0, maxCnt = 1;

	cout << "Enter some words(ctrl+z to end): " << endl;
	while (cin >> currWord) {
		if (currWord == preWord)
			++currCnt;
		else {
			if (currCnt > maxCnt) { // 对currCnt == maxCnt 的情况没有讨论
				//即如果 有  a a a b b b 序列 只会输出 a
				//用两个vector 可以做的更好
				maxCnt = currCnt;
				repWord = preWord;
			}
			currCnt = 1;
		}
		preWord = currWord;
	}

	if (maxCnt != 1)
		cout << '"' << repWord << '"'
		     << " repeated for " << maxCnt
		     << " times. " << endl;
	else 
		cout << "There is no repeated word." << endl;
	return 0;

}	

