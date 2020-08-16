/*
 * @Author: PlanC
 * @Date: 2020-08-16 15:41:26
 * @LastEditTime: 2020-08-16 15:43:38
 * @FilePath: /Practical-Training-Neusoft/8.5/6.c
 */

#include <stdio.h>

int max(int num1, int num2) {
	if (num1 > num2) {
		return num1;
	}
	else {
		return num2;
	}
}

int main() {
	int num1 = 0;
	int num2 = 0;
	while (scanf("%d %d", &num1, &num2) == 2) {
		printf("bigger in %d and %d is %d\n", num1, num2, max(num1, num2));
	}
	return 0;
}