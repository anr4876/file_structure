#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

void main() {


	ifstream inFile("test1.txt", ios::in);
	if (!inFile) {
		cerr << "Cannot open test1.txt for input\n" << endl;
		exit(-1);
	}
	
	char ch;
	while (inFile.get(ch))
		cout.put(ch);
		
}