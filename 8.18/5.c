/*
 * @Author: PlanC
 * @Date: 2020-08-18 15:32:17
 * @LastEditTime: 2020-08-18 15:41:21
 * @FilePath: /Practical-Training-Neusoft/8.18/5.c
 */

#include <stdio.h>
#include <string.h>

int space(int length) {
    int i = 0;
    for (i = 0; i < length; i++) {
        printf(" ");
    }
    return 0;
}

int context(int index) {
    int i = 0;
    for (i = 0; i < index; i++) {
        printf("%c", i + 65);
    }
    for (i = index - 2; i >= 0; i--) {
        printf("%c", i + 65);
    }
    return 0;
}

int main() {
    int i = 0;
    for (i = 1; i <= 6; i++) {
        space(6 - i);
        context(i);
        printf("\n");
    }
    return 0;
}