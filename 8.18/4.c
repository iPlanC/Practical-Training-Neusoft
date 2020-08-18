/*
 * @Author: PlanC
 * @Date: 2020-08-18 11:36:45
 * @LastEditTime: 2020-08-18 11:49:36
 * @FilePath: /Practical-Training-Neusoft/8.18/4.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 81

int main(int argc, char *argv[]) {
	if (argc != 3) {
		printf("usage: %s <string> <filename>\n", argv[0]);
		exit(1);
	}

	FILE *file = NULL;
	if ((file = fopen(argv[2], "r")) == NULL) {
		printf("can't open source file: %s\n", argv[2]);
	}
	rewind(file);

	int count = 0;
	char str[SIZE] = {'\0'};
	while (fgets(str, SIZE, file)) {
		if (strstr(str, argv[1]) != NULL) count++;
		if (feof(file)) break;
	}

	printf("file: %s has %d lines includes string: %s\n", argv[2], count, argv[1]);
	return 0;
}