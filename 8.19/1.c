/*
 * @Author: PlanC
 * @Date: 2020-08-19 08:26:32
 * @LastEditTime: 2020-08-19 09:37:57
 * @FilePath: /Practical-Training-Neusoft/8.19/1.c
 */

#include <stdio.h>

int main() {
	int i = 0;
	int flag = 0;
	unsigned long number = 0;
	printf("input an integer\n");
	while (scanf("%ld", &number) == 1) {
		for (i = 2; i * i <= number; i++) {
			if (number % i == 0) {
				printf("divided by %d and %ld\n", i, number / i);
				flag = 1;
			}
		}
		if (flag == 0) {
			printf("number: %ld, is a prime\n", number);
		}
		else {
			printf("number: %ld, is NOT a prime\n", number);
			flag = 0;
		}
	}
	
	return 0;
}