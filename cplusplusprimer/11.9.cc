/* 11.9.cc */
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool isShorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}	

bool GT4(const string &s)
{
	return s.size() >= 4;
}	

string make_plural(size_t ctr, const string &word, const string &ending)
{
	return (ctr == 1) ? word : word + ending;
}	

int main()
{
	vector<string> words;
	string next_word;
	cout << "Enter some words: " << endl;

	while (cin >> next_word)
		words.push_back(next_word);

	sort (words.begin(), words.end());
	vector<string>::iterator end_unique = 
		unique(words.begin(), words.end());
	words.erase(end_unique, words.end());

	cout << "unique words: " << endl;
	for (vector<string>::iterator iter = words.begin();
		iter != words.end(); ++iter) 
		cout << *iter << " ";
	cout << endl;
	stable_sort (words.begin(), words.end(), isShorter);
	vector<string>::size_type wc =
		count_if (words.begin(), words.end(), GT4);
//	cout << wc << " " <<" words"// << make_plural(wc, "word", "s") //作者自定义函数
//	     << " 4 characters or longer." << endl;
	cout << wc << " " << make_plural(wc, "word", "s") //作者自定义函数
	     << " 4 characters or longer." << endl;
	return 0;

}	

