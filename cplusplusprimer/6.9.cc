#include <iostream>
using namespace std;

int main()
{
	char currCh, preCh = '\0';
	int ffCnt = 0, flCnt = 0, fiCnt = 0;

	while (cin >> currCh) {
		if (preCh == 'f') //此处==常常写错成=,要特别注意
			switch (currCh) {
				case 'f':
					++ffCnt;
					break;
				case 'l':
					++flCnt;
					break;
				case 'i':
					++fiCnt;
					break;
			}
		preCh = currCh;
	}
	cout  << "Number of \"ff\": \t" << ffCnt << '\n'
	      << "Number of \"fl\": \t" << flCnt << '\n'
	      << "Number of \"fi\": \t" << fiCnt << '\n'
	      << endl;
	return 0;

}	
