/****
Authors: Justin Greenlee, Shane O'Keefe
Date: September 18th, 2015
Assignment: HuffnPuff
Details:
	Purpose - Compression program using the 
			  Huffman algorithm.
****/

#include <ctime>
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;
void main() {
	// prompt user
	cout << "File name? ";
	string filename;
	getline(cin, filename);

	// start clock
	clock_t start, end;
	start = clock();

	// read file
	// generate table of frequencies (hash map)
	// create huffman tree
	// create table of bistrings
	// encode the file

	// end clock
	end = clock();
	cout << setprecision(1) << fixed;
	cout << "The time was " << (double(end - start) / CLOCKS_PER_SEC) << " seconds." << endl;
}