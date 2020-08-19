/*
 * @Author: PlanC
 * @Date: 2020-08-19 08:26:32
 * @LastEditTime: 2020-08-19 09:55:53
 * @FilePath: /Practical-Training-Neusoft/8.19/2.c
 */

#include <stdio.h>

int main() {
	int i = 0;
	int j = 0;
	int flag = 0;
	unsigned long number = 0;

	printf("input an integer\n");
	while (scanf("%ld", &number) == 1) {
		for (i = 2; i <= number; i++) {
			for (j = 2; j * j <= i; j++) {
				if (i % j == 0) {
					flag = 1;
					break;
				}
			}
			if (flag == 0) {
				printf("prime: %d\n", i);
			}
			else {
				flag = 0;
			}
		}
	}
	
	return 0;
}