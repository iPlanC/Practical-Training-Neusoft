/*
 * @Author: PlanC
 * @Date: 2020-08-18 16:35:53
 * @LastEditTime: 2020-08-18 16:51:03
 * @FilePath: /Practical-Training-Neusoft/8.18/6.c
 */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
	int i = 0;
	int flag = 0;
	int number = 0;
	printf("input an integer\n");
	while (scanf("%d", &number) == 1) {
		for (i = 2; i <= (int)sqrt((double)number); i++) {
			if (number % i == 0) {
				printf("number: %d, is NOT a prime\n", number);
				flag = 1;
				break;
			}
		}
		if (flag == 0) {
			printf("number: %d is a prime\n", number);
		}
		else {
			flag = 0;
		}
	}

	return 0;
}