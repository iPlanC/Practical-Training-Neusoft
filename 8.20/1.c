/*
 * @Author: PlanC
 * @Date: 2020-08-20 08:39:04
 * @LastEditTime: 2020-08-20 10:49:21
 * @FilePath: /Practical-Training-Neusoft/8.20/1.c
 */

#include <stdio.h>
#include <string.h>

int getvalue(int value, int offset) {
    return (value >> (offset - 1)) & 0x0001;
}

int stoi(char *number) {
    int i = 0;
    int result = 0;
    for (i = 0; i < strlen(number); i++) {
        result = result * 10 + (number[i] - '0');
    }
    return result;
}

int main(int argc, char *argv[]) {
    printf("number: %d, %dth offset: %d\n", stoi(argv[1]), stoi(argv[2]), getvalue(stoi(argv[1]), stoi(argv[2])));
    return 0;
}