/*
 * @Author: PlanC
 * @Date: 2020-08-17 07:52:03
 * @LastEditTime: 2020-08-17 10:05:58
 * @FilePath: /Practical-Training-Neusoft/8.17/2.c
 */

#include <stdio.h>
#include <stdlib.h>

char ToUpper(char ch) {
	if (ch >= 97 && ch <= 122) {
		ch = ch - 32;
	}
	return ch;
}

int main(int argc, char *argv[]) {
	if (argc != 3) {
		printf("usage: %s <filename> <filename>\n", argv[0]);
		exit(1);
	}

	FILE *sourceFile = NULL;
	FILE *outputFile = NULL;
	if ((sourceFile = fopen(argv[1], "r")) == NULL) {
		printf("can't open source file: %s\n", argv[1]);
	}
	if ((outputFile = fopen(argv[2], "w")) == NULL) {
		printf("can't open output file: %s\n", argv[2]);
	}

	char ch;
	while ((ch = getc(sourceFile)) != EOF) {
		putc(ToUpper(ch), outputFile);
	}
	fclose(sourceFile);
	fclose(outputFile);
	
	return 0;
}