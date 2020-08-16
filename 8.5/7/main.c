/*
 * @Author: PlanC
 * @Date: 2020-08-16 15:49:35
 * @LastEditTime: 2020-08-16 15:57:04
 * @FilePath: /Practical-Training-Neusoft/8.5/7/main.c
 */

#include <stdio.h>
#include "max_min.h"

int main() {
	int num1 = 0;
	int num2 = 0;
	while (scanf("%d %d", &num1, &num2) == 2) {
		printf("bigger in %d and %d is %d\n", num1, num2, max(num1, num2));
		printf("lower in %d and %d is %d\n", num1, num2, min(num1, num2));
	}
	return 0;
}