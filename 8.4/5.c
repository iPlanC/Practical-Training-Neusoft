/*
 * @Author: PlanC
 * @Date: 2020-08-15 10:42:29
 * @LastEditTime: 2020-08-15 10:48:08
 * @FilePath: /Practical-Training-Neusoft/8.4/5.c
 */

#include <stdio.h>

int main() {
	int years = 0;
	double total = 1000000.0;
	while (total > 0) {
		total = total + total * 0.08;
		total = total - 100000.0;
		years++;
	}
	printf("%d years later\n", years);
	return 0;
}