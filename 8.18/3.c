/*
 * @Author: PlanC
 * @Date: 2020-08-18 09:48:08
 * @LastEditTime: 2020-08-18 11:33:55
 * @FilePath: /Practical-Training-Neusoft/8.18/3.c
 */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 81

int main(int argc, char *argv[]) {
	if (argc != 3) {
		printf("usage: %s <filename> <filename>\n", argv[0]);
		exit(1);
	}

	FILE *file1 = NULL;
	FILE *file2 = NULL;
	if ((file1 = fopen(argv[1], "r")) == NULL) {
		printf("can't open source file: %s\n", argv[1]);
	}
	if ((file2 = fopen(argv[2], "r")) == NULL) {
		printf("can't open output file: %s\n", argv[2]);
	}
	rewind(file1);
	rewind(file2);

	int i = 0;
	int j = 0;
	char str1[SIZE] = {'\0'};
	char str2[SIZE] = {'\0'};
	while (1) {
		if (fgets(str1, SIZE, file1) != NULL) {
			i = 0;
			while (str1[i] != '\n') {
				putc(str1[i++], stdout);
			}
		}
		putc(' ', stdout);
		if (fgets(str2, SIZE, file2) != NULL) {
			j = 0;
			while (str2[j] != '\n') {
				putc(str2[j++], stdout);
			}
		}
		putc('\n', stdout);
		if (feof(file1) && feof(file2)) break;
	}
	fclose(file1);
	fclose(file2);

	return 0;
}
