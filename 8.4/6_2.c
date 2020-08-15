/*
 * @Author: PlanC
 * @Date: 2020-08-15 10:51:24
 * @LastEditTime: 2020-08-15 11:13:13
 * @FilePath: /Practical-Training-Neusoft/8.4/6_2.c
 */

#include <stdio.h>

int main() {
	int enterd = 0;
	int password = 13;

	do {
		printf("type your password\n");
		scanf("%d", &enterd);
	} while(enterd != password);

	printf("password correct\n");
	return 0;
}