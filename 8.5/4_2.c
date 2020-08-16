/*
 * @Author: PlanC
 * @Date: 2020-08-16 15:23:25
 * @LastEditTime: 2020-08-16 15:29:37
 * @FilePath: /Practical-Training-Neusoft/8.5/4_2.c
 */

#include <stdio.h>

int main() {
	int day = 0;
	printf("input a number");
	scanf("%d", &day);
	switch (day) {
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("Workday\n");
			break;
		case 6:
		case 7:
			printf("Weekend\n");
			break;
		default:
			break;
	}
	return 0;
}