/*
 * @Author: PlanC
 * @Date: 2020-08-18 08:49:16
 * @LastEditTime: 2020-08-18 09:52:30
 * @FilePath: /Practical-Training-Neusoft/8.18/1.c
 */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 81

int main() {
	char str[SIZE] = {'\0'};
	while (fgets(str, SIZE, stdin) != NULL && str[0] != '\n') {
		fputs(str, stdout);
	}
	return 0;
}