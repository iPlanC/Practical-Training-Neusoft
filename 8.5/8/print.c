/*
 * @Author: PlanC
 * @Date: 2020-08-16 15:59:17
 * @LastEditTime: 2020-08-16 16:04:26
 * @FilePath: /Practical-Training-Neusoft/8.5/8/print.c
 */

#include <stdio.h>

int print(char ch, int row, int col) {
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			printf("%c", ch);
		}
		printf("\n");
	}
	return 0;
}