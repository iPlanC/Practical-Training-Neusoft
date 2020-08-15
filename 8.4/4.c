/*
 * @Author: PlanC
 * @Date: 2020-08-15 10:35:15
 * @LastEditTime: 2020-08-15 10:41:40
 * @FilePath: /Practical-Training-Neusoft/8.4/4.c
 */

#include <stdio.h>

int main() {
	double num1 = 0.0;
	double num2 = 0.0;
	printf("input 2 dpuble-type numbers:\n");
	while (scanf("%lf %lf", &num1, &num2) == 2) {
		printf("(%.3lf - %.3lf) / (%.3lf * %.3lf) = %.3lf\n", num1, num2, num1, num2, (num1 - num2) / (num1 * num2));
		printf("input 2 dpuble-type numbers:\n");
	}
	printf("incorrect numbers!\n");
	return 0;
}