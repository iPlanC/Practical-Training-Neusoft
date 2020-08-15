/*
 * @Author: PlanC
 * @Date: 2020-08-15 10:29:27
 * @LastEditTime: 2020-08-15 10:48:16
 * @FilePath: /Practical-Training-Neusoft/8.4/3.c
 */

#include <stdio.h>

int main() {
	int i = 0;
	int j = 0;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}