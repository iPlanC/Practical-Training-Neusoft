/*
 * @Author: PlanC
 * @Date: 2020-08-15 10:51:24
 * @LastEditTime: 2020-08-15 11:14:12
 * @FilePath: /Practical-Training-Neusoft/8.4/11.c
 */

#include <stdio.h>

int main() {
	int tried = 0;
	int enterd = 0;
	int password = 13;

	do {
		printf("type your password\n");
		scanf("%d", &enterd);
		if (enterd == password) {
			printf("password correct\n");
			return 0;
		}
		else {
			tried++;
		}
	} while(tried < 3);

	printf("wrong 3 times exiting\n");
	return 1;
}