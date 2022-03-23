#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX 20
#include <time.h>


int main() {
	char buf[MAX], ch;
	int offset = 0, result,num;
	FILE* fout;
	if ((fout = fopen("data1.txt", "w")) != NULL)
	{
		srand((unsigned)time(NULL));
		for (int i = 0; i < 10; i++) 
		{
			for (int j = 0; j < 10; j++)
			{	
				num = rand() % 300;
				fprintf(fout, "%d\t", num);
			}
			fprintf(fout, "\n");
		}
		fclose(fout);
	}
	FILE* fin;
	if ((fin = fopen("data1.txt", "r")) != NULL) {
		
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				fscanf(fin, "%d", &num);
				printf("%d\t", num);
			}
			printf("\n");
		}
		fclose(fout);
	}
	return 0;
}