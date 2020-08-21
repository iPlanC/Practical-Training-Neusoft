/*
 * @Author: PlanC
 * @Date: 2020-08-21 11:19:43
 * @LastEditTime: 2020-08-21 11:49:52
 * @FilePath: /Practical-Training-Neusoft/8.21/3.c
 */

#include <stdio.h>

#define aver(num1, num2) ((2 * (num1) * (num2)) / ((num1) + (num2)))
#define aver2(num1, num2) (1 / (((1 / num1) + (1 / num2)) / 2))

int main() {
    printf("%lf\n", aver2(1.0, 3.0));
    return 0;
}