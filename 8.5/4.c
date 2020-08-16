/*
 * @Author: PlanC
 * @Date: 2020-08-16 15:23:25
 * @LastEditTime: 2020-08-16 15:29:50
 * @FilePath: /Practical-Training-Neusoft/8.5/4.c
 */

#include <stdio.h>

int main() {
	int day = 0;
	printf("input a number");
	scanf("%d", &day);
	switch (day) {
		case 1:
			printf("Monday\n");
			break;
		case 2:
			printf("Tuesday\n");
			break;
		case 3:
			printf("Wednesday\n");
			break;
		case 4:
			printf("Tuseday\n");
			break;
		case 5:
			printf("Friday\n");
			break;
		case 6:
			printf("Saturday\n");
			break;
		case 7:
			printf("Sunday\n");
			break;
		default:
			break;
	}
	return 0;
}