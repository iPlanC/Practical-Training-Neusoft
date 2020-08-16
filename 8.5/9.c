/*
 * @Author: PlanC
 * @Date: 2020-08-16 15:47:15
 * @LastEditTime: 2020-08-16 16:12:24
 * @FilePath: /Practical-Training-Neusoft/8.5/9.c
 */

#include <stdio.h>

int main(void) {
	int a = 10;
	int *pt;
	pt = &a;

	printf("&a = %p\n", &a);
	printf("pt = %p\n", pt);
	printf("&pt = %p\n", &pt);
	printf("*pt = %d\n", *pt);

	return 0;
}