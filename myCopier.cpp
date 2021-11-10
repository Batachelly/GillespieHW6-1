/* Program name: myCopier.cpp
 *
 * this program that opens a text file, reads and prints line by line to anouther life.
 * the text file names are passed on the command line as arguments.
 *
 *
 *
 *
 */


#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<string>
using namespace std;


int main(int argc, char* argv[]){
	if(argc!=3){
		cout << endl;
		cout << "Usage is myCopier followed by the file to read, ";
		cout << "followed by the file to write." << endl;
		cout << " e.g. ./myCopier fileToRead.txt fileToWrite.txt" << endl;
		cout << endl;
		return 2;
	}
	string readFile(argv[1]);
	string writeFile(argv[2]);
	cout << endl;
	cout << "Starting the copying process ..." << endl;
	cout << "File name passed for reading is: " << readFile << endl;
	cout << "File name passed for writing is: " << writeFile << endl;
	cout << endl;

	fstream fsr;
	fstream fsw;
	string line;

	// The c_str() method returns a C++ string as a C string.
	fsr.open((readFile).c_str(), fstream::in);
	fsw.open((writeFile).c_str(), fstream::out);

	while(getline(fsr,line)){
		fsw << line << endl;
	}

	fsr.close();
	fsw.close();
}


