#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <iomanip>

using namespace std;


void main() {

	ifstream inF("infile.txt", ios::in); // 읽을 파일 
	ofstream outF("outfile.txt", ios::out); // 출력 파일

	int cnt = 0;
	const int bufSize = 512;
	char buf[bufSize];

	while (inF >> setw(bufSize) >> buf) {
		outF << buf << endl;
		++cnt;
		cout << buf << endl;

	}
	cout << "[" << cnt << "]" << endl;
}