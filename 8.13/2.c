/*
 * @Author: PlanC
 * @Date: 2020-08-13 09:04:56
 * @LastEditTime: 2020-08-13 09:23:58
 * @FilePath: /Practical-Training-Neusoft/8.13/2.c
 */

#include <stdio.h>

#define SIZE 10

struct scores {
	char name[SIZE];
	double Chinese;
	double Math;
	double English;
};

double sum(const struct scores *fellow) {
	return fellow->Chinese + fellow->Math + fellow->English;
}

int main() {
	struct scores fellow = {
		"Jerry",
		120,
		115,
		118
	};
	printf("%.2lf\n", sum(&fellow));

	return 0;
}