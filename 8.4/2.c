/*
 * @Author: PlanC
 * @Date: 2020-08-15 10:24:48
 * @LastEditTime: 2020-08-15 10:30:29
 * @FilePath: /Practical-Training-Neusoft/8.4/2.c
 */

#include <stdio.h>
#define ROW 4
#define COL 3

int main() {
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++) {
			printf("A");
		}
		printf("\n");
	}
	return 0;
}