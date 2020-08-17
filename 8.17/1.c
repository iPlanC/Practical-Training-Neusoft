/*
 * @Author: PlanC
 * @Date: 2020-08-17 07:52:03
 * @LastEditTime: 2020-08-17 09:32:07
 * @FilePath: /Practical-Training-Neusoft/8.17/1.c
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	if (argc != 2) {
		printf("usage: %s <filename>\n", argv[0]);
		exit(1);
	}

	FILE *file = NULL;
	if ((file = fopen(argv[1], "r")) == NULL) {
		printf("can't open file: %s\n", argv[1]);
	}

	long int count = 0;
	char ch;
	while ((ch = getc(file)) != EOF) {
		putc(ch, stdout);
		count++;
	}
	printf("\n");
	printf("file: %s has %ld charactors\n", argv[1], count);
	fclose(file);
	
	return 0;
}