/*
 * @Author: PlanC
 * @Date: 2020-08-14 14:10:36
 * @LastEditTime: 2020-08-14 14:24:30
 * @FilePath: /Practical-Training-Neusoft/8.14/2.c
 */

#include <stdio.h>

int Div(int number) {
    int total = 0;
    while (number >= 2) {
        if (number % 2 == 1) {
            total++;
        }
        number = number / 2;
    }
    if (number == 1) {
        return total + 1;
    }
    return total;
}

int main() {
    int number = 0;
    while (1) {
        printf("input a number:\n");
        scanf("%d", &number);
        if (number == 0) break;
        printf("the number \"%d\" has %d \n", number, Div(number));
    }
    return 0;
}