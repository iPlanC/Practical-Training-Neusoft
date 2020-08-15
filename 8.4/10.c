/*
 * @Author: PlanC
 * @Date: 2020-08-15 10:45:40
 * @LastEditTime: 2020-08-15 11:10:20
 * @FilePath: /Practical-Training-Neusoft/8.4/10.c
 */

#include <stdio.h>

int main() {
	int enterd = 0;
	int password = 13;

	printf("type your password\n");
	scanf("%d", &enterd);
	if (enterd == password) {
		printf("password correct\n");
	}
	return 0;
}