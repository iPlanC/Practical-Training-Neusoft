/*
 * @Author: PlanC
 * @Date: 2020-08-19 14:41:47
 * @LastEditTime: 2020-08-19 15:30:32
 * @FilePath: /Practical-Training-Neusoft/8.19/5.c
 */

// 123456789 -> 135792648

#include <stdio.h>
#include <string.h>

#define SIZE 81

char *decode1(char *code) {
	
}

char *decode2(char *code, char *decode) {
	int i = 0;
	int j = 0;
	int flag = 0;

	for (i = 0; i < strlen(code); i++) flag = flag + code[i] - 48;
	i = 0;
	while (flag > 0) {
		for (i = i % strlen(code); i < strlen(code); i+=2) {
			if (flag > 0) {
				decode[j++] = code[i];
				flag = flag - (code[i] - 48);
			}
		}
	}
	decode[j] = '\0';
	return decode;
}

int main() {
	char code[SIZE];
	char decode[SIZE];
	printf("input the string needs to decode\n");
	while (gets(code) && code[0] != '\n') {
		printf("the code \"%s\" decoded result is: \"%s\"\n", code, decode2(code, decode));
	}
}