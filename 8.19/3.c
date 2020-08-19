/*
 * @Author: PlanC
 * @Date: 2020-08-19 10:47:36
 * @LastEditTime: 2020-08-19 11:16:07
 * @FilePath: /Practical-Training-Neusoft/8.19/3.c
 */

#include <stdio.h>

int rotate(int x, int i) {
	int j = 0;
	int highest = 0;

	for (j = 0; j < i; j++) {
		highest = 0x8000 & x;
		x = x << 1;
		x = x | highest;
	}
	return x;
}

int main() {
	//printf("rotate: %d\n", rotate(0x0001, 0));// 0x0001 1
	//printf("rotate: %d\n", rotate(0x0001, 1));// 0x0001 2
	//printf("rotate: %d\n", rotate(0x0001, 2));// 0x0001 4
	//printf("rotate: %d\n", rotate(0x0001, 3));// 0x0001 8
	//printf("rotate: %d\n", rotate(0x0001, 4));// 0x0001 16

	int count = 0;
	int number = 0;
	printf("input two integers\n");
	while (scanf("%x %d", &number, &count) == 2) {
		printf("rotate(%d, %d) = %d\n", number, count, rotate(number, count));
	}
	return 0;
}
