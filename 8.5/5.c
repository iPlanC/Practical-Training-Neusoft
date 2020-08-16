/*
 * @Author: PlanC
 * @Date: 2020-08-16 15:30:55
 * @LastEditTime: 2020-08-16 15:40:35
 * @FilePath: /Practical-Training-Neusoft/8.5/5.c
 */

#include <stdio.h>

int main() {
	int number = 0;
	int odd_sum = 0;
	double odd_aver = 0.0;
	int even_sum = 0;
	double even_aver = 0.0;
	
	while (1) {
		printf("input an integer\n");
		scanf("%d", &number);
		if (number == 0) break;
		switch (number % 2) {
			case 0:
				even_sum++;
				even_aver+=number;
				break;
			case 1:
				odd_sum++;
				odd_aver+=number;
				break;
		}
	}
	printf("odd number: %d\todd number average: %lf\n", odd_sum, odd_aver / odd_sum);
	printf("even number: %d\teven number average: %lf\n", even_sum, even_aver / even_sum);
	return 0;
}