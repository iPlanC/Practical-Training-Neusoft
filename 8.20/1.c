/*
 * @Author: PlanC
 * @Date: 2020-08-20 08:39:04
 * @LastEditTime: 2020-08-20 10:20:20
 * @FilePath: /Practical-Training-Neusoft/8.20/1.c
 */

#include <stdio.h>

int getvalue(int value, int offset) {
    return (value >> (offset - 1)) & 0x0001;
}

int main() {
    int value = 0;
    int offset = 0;
    printf("input integer and offset\n");
	while (scanf("%d %d", &value, &offset) == 2) {
        printf("number: %d, %dth offset: %d\n", value, offset, getvalue(value, offset));
    }
    return 0;
}