/*
 * @Author: PlanC
 * @Date: 2020-08-21 14:26:07
 * @LastEditTime: 2020-08-21 14:34:34
 * @FilePath: /Practical-Training-Neusoft/8.21/5.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char stack[512];
int top = 0;

void push(char c) {
	stack[top++] = c;
}

char pop() {
	return stack[--top];
}

int is_empty() {
	return top == 0;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <string>\n", argv[0]);
        exit(0);
    }

    int i = 0;
    for (i = 0; i < strlen(argv[1]) / 2; i++) {
        push(argv[1][i]);
    }

    if (strlen(argv[1]) % 2 == 0) {
        i = strlen(argv[1]) / 2;
    }
    else {
        i = strlen(argv[1]) / 2 + 1;
    }

    for (i; i < strlen(argv[1]); i++) {
        if (pop() != argv[1][i]) {
            printf("false.\n");
            return 1;
        }
    }
    printf("true.\n");
    return 0;
}