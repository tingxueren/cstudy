#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	if (s1 == s2)
		cout << " s1 is simer with s2. " << endl;
	if (s1 > s2)
		cout << " s1 is the biger one. " << endl;
	else 
		cout << " s2 is the biger one. " << endl;
	
	if (s1.size() == s2.size())
		cout << " s1 is sime long with s2. " << endl;
	if (s1.size() > s2.size())
		cout << " s1 is the longer one. " << endl;
	else 
		cout << " s2 is the longer one. " << endl;

	return 0;

}	

