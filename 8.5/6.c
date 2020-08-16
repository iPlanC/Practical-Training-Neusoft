/*
 * @Author: PlanC
 * @Date: 2020-08-16 15:41:26
 * @LastEditTime: 2020-08-16 15:57:20
 * @FilePath: /Practical-Training-Neusoft/8.5/6.c
 */

#include <stdio.h>

int max(int num1, int num2) {
	int max = 0;
	if (num1 > num2) {
		max = num1;
	}
	else {
		max = num2;
	}
	return max;
}

int main() {
	int num1 = 0;
	int num2 = 0;
	while (scanf("%d %d", &num1, &num2) == 2) {
		printf("bigger in %d and %d is %d\n", num1, num2, max(num1, num2));
	}
	return 0;
}