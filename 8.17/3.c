/*
 * @Author: PlanC
 * @Date: 2020-08-17 10:30:25
 * @LastEditTime: 2020-08-17 10:45:40
 * @FilePath: /Practical-Training-Neusoft/8.17/3.c
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i = 0;
	char ch;
	FILE *fp = NULL;
	for (i = 1; i < argc; i++) {
		if ((fp = fopen(argv[i], "r")) == NULL) {
			printf("can't open source file: %s\n", argv[i]);
		}
		else {
			while ((ch = getc(fp)) != EOF) {
				putc(ch, stdout);
			}
			fclose(fp);
		}
		printf("\n");
	}

	return 0;
}