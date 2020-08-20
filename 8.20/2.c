/*
 * @Author: PlanC
 * @Date: 2020-08-20 11:08:22
 * @LastEditTime: 2020-08-20 11:46:37
 * @FilePath: /Practical-Training-Neusoft/8.20/2.c
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 81

int main(int argc, char *argv[]) {
	if (argc != 3) {
		printf("Usage: %s <integer> <filename>", argv[0]);
		exit(1);
	}
	
	FILE *fp = NULL;
	if ((fp = fopen(argv[2], "w")) == NULL) {
		printf("can't open file \"%s\"", argv[2]);
		exit(2);
	}
	rewind(fp);
	fputs(argv[1], fp); fclose(fp);

	int i = 0;
	int j = 0;
	int bucket[10] = {0};
	char array[SIZE] = {'\0'};
	char result[SIZE] = {'\0'};
	if ((fp = fopen(argv[2], "r")) == NULL) {
		printf("can't open file \"%s\"", argv[2]);
	}
	while (fgets(array, SIZE, fp) != NULL) {
		for (i = 0; i < strlen(array); i++) {
			if (bucket[(int)(array[i] - '0')] == 0) {
				bucket[(int)(array[i] - '0')]++;
				// printf("%d", array[i] - '0');
				result[j++] = array[i];
			}
		}
	}

	if ((fp = fopen(argv[2], "w")) == NULL) {
		printf("can't open file \"%s\"", argv[2]);
		exit(3);
	}
	rewind(fp);
	fputs(result, fp); fclose(fp);
	printf("%s\n", result);
	return 0;
}