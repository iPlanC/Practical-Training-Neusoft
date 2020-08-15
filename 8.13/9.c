/*
 * @Author: PlanC
 * @Date: 2020-08-13 16:14:20
 * @LastEditTime: 2020-08-15 10:32:11
 * @FilePath: /Practical-Training-Neusoft/8.13/9.c
 */

/* 大端模式：数据的低位存在内存的高地址，数据的高位存在内存的低地址。
 * 小端模式：数据的低位存在内存的低地址，数据的高位存在内存的高地址。
 * 英特尔处理器都是小端模式
 */

#include <stdio.h>

struct test {
	int n;
	char temp[4];
};

union test2 {
	int n;
	char test[4];
};

typedef union test2 test2_t;

int main() {
	test2_t t;
	int number = 0x12345678;
	// little endian:   0x78 0x56 0x34 0x12
	// big endian:      0x12 0x34 0x56 0x78

	printf("size of struct is %ld\n", sizeof(struct test));
	printf("size of union is %ld\n", sizeof(union test2));

	printf("your pc is little or big endian?\n");
	t.n = 0x12345678;
	printf("t.test[0] = 0x%x\n", t.test[0]);
	printf("t.test[1] = 0x%x\n", t.test[1]);
	printf("t.test[2] = 0x%x\n", t.test[2]);
	printf("t.test[3] = 0x%x\n", t.test[3]);
	return 0;
}