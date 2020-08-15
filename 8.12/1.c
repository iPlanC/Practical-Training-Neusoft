/*
 * @Author: PlanC
 * @Date: 2020-08-12 08:53:33
 * @LastEditTime: 2020-08-15 10:31:10
 * @FilePath: /Practical-Training-Neusoft/8.12/1.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main() {
	int i = 0;
	int j = 0;
	int temp = 0;
	int array[SIZE] = {0};

	srand((unsigned int)time(0));

	printf("Original array:\n");
	for (i = 0; i < SIZE; i++) {
		array[i] = rand() % 10 + 1;
		printf("%d ", array[i]);
	}
	printf("\n");

	printf("Sorted array:\n");
	for (i = 0; i < SIZE - 1; i++) {
		for (j = i + 1; j < SIZE; j++) {
			if (array[i] < array[j]) {
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
		printf("%d ", array[i]);
	}
	printf("%d\n", array[SIZE - 1]);

	return 0;
}