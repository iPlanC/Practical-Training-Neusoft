/*
 * @Author: PlanC
 * @Date: 2020-08-17 11:09:37
 * @LastEditTime: 2020-08-17 11:53:54
 * @FilePath: /Practical-Training-Neusoft/8.17/4.c
 */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 81

int main(int argc, char *argv[]) {
	if (argc != 2) {
		printf("usage: %s <filename>\n", argv[0]);
		exit(1);
	}

	char context[SIZE] = {'\0'};
	FILE *fp = NULL;
	if ((fp = fopen(argv[1], "a+")) == NULL) {
		fprintf(stdout, "can't open file: %s\n", argv[1]);
	}

	puts("enter words into the file:");
	while (gets(context) != NULL && context[0] != '\0') {
		fprintf(fp, "%s", context);
	}
	rewind(fp);

	puts("file context:");
	while (fscanf(fp, "%s", context) == 1) {
		printf("%s", context);
	}
	printf("\n");
	fclose(fp);

	return 0;
}