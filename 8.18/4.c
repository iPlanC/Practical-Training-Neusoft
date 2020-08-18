/*
 * @Author: PlanC
 * @Date: 2020-08-18 14:11:15
 * @LastEditTime: 2020-08-18 14:32:02
 * @FilePath: /Practical-Training-Neusoft/8.18/4.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 81

int Palindrome(char *str) {
	int i = 0;
	for (i = 0; i < strlen(str) / 2; i++) {
		if (str[i] != str[strlen(str) - i]) {
			return i;
		}
	}
	return 0;
}

int main(int argc, char *argv[]) {
	if (argc != 2) {
		printf("usage: %s <string>\n", argv[0]);
		exit(1);
	}

	if (Palindrome(argv[1]) == 0) {
		printf("string:\"%s\" is a Palindrome\n", argv[1]);
	}
	else {
		printf("string:\"%s\" is NOT a Palindrome\n", argv[1]);
	}

	return 0;
}