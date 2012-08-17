#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1, s2;
//	cin >> s1;
	getline(cin, s1);
	for (string::size_type index = 0; index < s1.size(); ++index) {
		if (!ispunct(s1[index]))
			s2 += s1[index];
	
	}
	cout << s1 << endl << s2 << endl;
	return 0;	

}	
