#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s, result_str;
	bool has_punct = false;
	
	cout << "Enter a string:" << endl;
	getline(cin, s);

	for (string::size_type index = 0; index != s.size(); ++index) {
		if (ispunct(s[index]))
			has_punct = true;
		else
			result_str += s[index];
	}
	if (has_punct)
		cout << "Result:" << endl << result_str << endl;
	else {
		cout << "No punctuation character in the string?!" << endl;
		return -1;
	}
	return 0;
}	

