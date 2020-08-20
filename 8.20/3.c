/*
 * @Author: PlanC
 * @Date: 2020-08-20 14:44:23
 * @LastEditTime: 2020-08-20 14:56:30
 * @FilePath: /Practical-Training-Neusoft/8.20/3.c
 */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int my_atoi(char *str) {
	int i = 0;
	int number = 0;
	for (i = 0; i < strlen(str); i++) {
		if (isdigit(str[i])) {
			number = number * 10 + (str[i] - '0');
		}
	}
	if (str[0] == '-') {
		return -number;
	}
	else {
		return number;
	}
}

int main(int argc, char *argv[]) {
	if (argc != 3) {
		printf("Usage: %s <integer> <integer>", argv[0]);
		exit(0);
	}
	printf("%d + %d = %d\n", my_atoi(argv[1]), my_atoi(argv[2]), my_atoi(argv[1]) + my_atoi(argv[2]));
	return 0;
}