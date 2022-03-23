#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <iomanip>

using namespace std;


void main() {

	ifstream inF("infile.txt", ios::in); // ���� ���� 
	ofstream outF("outfile.txt", ios::out); // ��� ����

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