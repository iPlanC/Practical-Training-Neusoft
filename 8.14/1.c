/*
 * @Author: PlanC
 * @Date: 2020-08-14 08:19:40
 * @LastEditTime: 2020-08-14 11:40:45
 * @FilePath: /Practical-Training-Neusoft/8.14/1.c
 */

#include <math.h>
#include <stdio.h>
#include <string.h>

int Bin2Dec(char *str) {
    int i = 0;
    int total = 0;
    for (i = strlen(str) - 1; i >= 0; i--) {
        total = total + (int)(((int)str[strlen(str) - i - 1] - 48) * pow(2.0, (double)i));
    }
    return total;
}

int main() {
    char str[81] = {'\0'};
    puts("input a binary string:");
    while (gets(str) && str[0] != '\0') {
        printf("binary \"%s\" to decimal is %d\n", str, Bin2Dec(str));
        puts("input a binary string:");
    }
    return 0;
}