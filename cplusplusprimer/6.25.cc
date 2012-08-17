#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<string> vstr;
	string str, currWord, preWord;
	int currCnt = 1;// maxCnt;

	cout << "Enter items for the vector: " << endl;
	while(cin >> str)
		vstr.push_back(str);
	currWord = vstr[0];
	for (vector<string>::iterator iter = vstr.begin() + 1;
	     iter != vstr.end(); ++iter) {
		preWord = currWord;
		currWord = *iter;
		if ((preWord == currWord) && isupper((*iter)[0])) {
			currCnt++;
			cout << "The repeated word is " << currWord << endl;
			break;
		}			
		else { 
		//	maxCnt = currCnt
			continue;}
	
	}
	for (vector<string>::iterator iter = vstr.begin();
	     iter != vstr.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	if (currCnt == 1)
		cout << "There are not repeated word. " << endl;
	return 0;
}





























	

