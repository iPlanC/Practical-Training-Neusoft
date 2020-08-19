/*
 * @Author: PlanC
 * @Date: 2020-08-19 10:47:36
 * @LastEditTime: 2020-08-19 12:01:53
 * @FilePath: /Practical-Training-Neusoft/8.19/3.c
 */

#include <stdio.h>

int rotate(unsigned int x,unsigned int i) {
	return (x >> (32 - i)) | (x << i);
}

char *dec_to_binstr(int num, char *pt) {
	int i;
	for(i = 31; i >=0; i--, num >>= 1) {
		pt[i] = (num & 1) + '0';
	}
	pt[32] = '\0';
	return pt;
}

int main() {
	unsigned int count = 0;
	unsigned int number = 0;
	char binstr1[33] = {'\0'};
	char binstr2[33] = {'\0'};
	printf("input two integers\n");
	while (scanf("%x %d", &number, &count) == 2) {
		printf("rotate(%s, %d) = \n       %s\n", dec_to_binstr(number, binstr2), count, dec_to_binstr(rotate(number, count), binstr1));
	}
	return 0;
}
