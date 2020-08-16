/*
 * @Author: PlanC
 * @Date: 2020-08-16 15:06:12
 * @LastEditTime: 2020-08-16 15:16:29
 * @FilePath: /Practical-Training-Neusoft/8.5/2.c
 */

#include <stdio.h>

int main() {
	char ch;
	int spaces = 0;
	int lines = 0;
	int others = 0;
	while ((ch = getchar()) != '#') {
		if (ch == ' ') {
			spaces++;
		}
		else if (ch == '\n') {
			lines++;
		}
		else {
			others++;
		}
	}
	printf("spaces: %d\tlines: %d\tothers: %d\n", spaces, lines, others);
	return 0;
}