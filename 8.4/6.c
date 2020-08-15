/*
 * @Author: PlanC
 * @Date: 2020-08-15 10:45:40
 * @LastEditTime: 2020-08-15 10:52:02
 * @FilePath: /Practical-Training-Neusoft/8.4/6.c
 */

#include <stdio.h>

int main() {
	int enterd = 0;
	int password = 13;

	while(enterd != password) {
		printf("type your password\n");
		scanf("%d", &enterd);
	}

	printf("password correct\n");
	return 0;
}