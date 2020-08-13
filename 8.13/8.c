/*
 * @Author: PlanC
 * @Date: 2020-08-13 16:00:15
 * @LastEditTime: 2020-08-13 16:01:49
 * @FilePath: /Practical-Training-Neusoft/8.13/8.c
 */

#include <stdio.h>

int sum(int x, int y) {
    return x + y;
}

int main() {
    int a = 10;
    int b = 20;
    int total = 0;

    total = sum(a, b);
    printf("total = %d", total);
    return 0;
}