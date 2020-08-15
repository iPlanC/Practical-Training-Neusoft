/*
 * @Author: PlanC
 * @Date: 2020-08-12 09:30:23
 * @LastEditTime: 2020-08-15 10:24:12
 * @FilePath: /Practical-Training-Neusoft/8.4/1.c
 */

#include <stdio.h>
#define SIZE 26

int main() {
	int i = 0;
	char arr[SIZE] = {'\0'};

	for (i = 0; i < SIZE; i++) {
		arr[i] = 'a' + i;
	}
	for (i = 0; i < SIZE; i++) {
		printf("arr[%d] = %c\n", i, arr[i]);
	}
	return 0;
}