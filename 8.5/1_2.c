/*
 * @Author: PlanC
 * @Date: 2020-08-12 09:30:27
 * @LastEditTime: 2020-08-16 15:16:36
 * @FilePath: /Practical-Training-Neusoft/8.5/1_2.c
 */

#include <stdio.h>

int main() {
	char ch;
	while ((ch = getchar()) != '\n') {
		if (ch == ' ') {
			putchar(ch);
		}
		else {
			putchar(ch + 1);
		}
		ch = getchar();
	}
	printf("\n");
	return 0;
}