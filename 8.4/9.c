/*
 * @Author: PlanC
 * @Date: 2020-08-15 10:59:41
 * @LastEditTime: 2020-08-15 11:12:40
 * @FilePath: /Practical-Training-Neusoft/8.4/9.c
 */

#include <stdio.h>
#include <string.h>

int main() {
	int i = 0;
	char str[81] = {'\0'};

	printf("input a string:\n");
	while (scanf("%s", str) == 1) {
		for (i = strlen(str) - 1; i >= 0; i--) {
			printf("%c", str[i]);
		}
		printf("\n");
		printf("input a string:\n");
	}
	return 0;
}