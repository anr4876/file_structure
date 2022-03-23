#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;
#define MAX 100

void main() {

	char buf[MAX], ch;
	int ofFsef = 0, result, scanType;

	FILE* fout;
	if ((fout = fopen("testout.txt", "w")) != NULL) {
		printf("Entet your text : ");
		gets_s(buf);
		fputs(buf, fout);
		fclose(fout);

	}

	FILE* fin;
	if ((fin = fopen("testout.txt", "r")) != NULL) {
		fgets(buf, MAX, fin);
		puts(buf);
		fclose(fin);
	}
}