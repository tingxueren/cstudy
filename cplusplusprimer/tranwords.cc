/*
 * A program to transform words.
 * Takes two arguments: The first name of the word transformation file
 *                      The second is name of the input to transform
 */
#include <iostream>
#include <sstream>  // string stream
#include <fstream>  // file stream
#include <exception> // exception
#include <stdexcept> // runtime_error
#include <string>
#include <map>
using namespace std;

int main(int argc, char **argv)
{
	// map to hold the word transformation pairs:
	// key is the word to look for in the input; 
	// value is word to use in the output
	map<string, string> trans_map;
	string key, value;
//	if (argc != 3)
//		throw runtime_error("wrong number of arguements");
	// open transformation file and check that open succeeded
	ifstream map_file;
	map_file.open("map_file.txt");
//	if (!open_file(map_file, argv[1])) // open_file 为书中自己实现的函数,准备替换掉
//	if (map_file.open("map_file.txt"))
//		throw runtime_error("no transformation file");

	// read the transformation map and build the map
	while (map_file >> key >> value)
		trans_map.insert(make_pair(key, value));
	// ok, now we're ready to do transformations
	// open the input file and check that the open succeeded
	ifstream input;
	input.open("input.txt");
//	if (!open_file(input, argv[2]))
//	if (input.open("input.txt"))
//		throw runtime_error("no input file");
	string line; // hold each line form the input
	// read the text to transform it a line at a time
	while (getline(input, line)) {
		istringstream stream(line); // read the line a word at a time
		string word;
		bool firstword = true; // controls whether a space is printed
		while (stream >> word) {
			// ok, the actual mapwork, this part is the heart of the program
			map<string, string>::const_iterator map_it = trans_map.find(word);
			// if this word is in the transformation map
			if (map_it != trans_map.end())
				// replace it by the transformation value in the map
				word = map_it->second;
			if (firstword)
				firstword = false;
			else
				cout << " "; // print space between words
			cout << word;

		
		}
		cout << endl;
	}
	return 0;
}	

