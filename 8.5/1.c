/*
 * @Author: PlanC
 * @Date: 2020-08-12 09:30:27
 * @LastEditTime: 2020-08-16 15:06:31
 * @FilePath: /Practical-Training-Neusoft/8.5/1.c
 */

#include <stdio.h>

int main() {
	char ch;
	ch = getchar();
	while (ch != '\n') {
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