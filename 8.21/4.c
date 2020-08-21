/*
 * @Author: PlanC
 * @Date: 2020-08-21 13:43:39
 * @LastEditTime: 2020-08-21 14:22:33
 * @FilePath: /Practical-Training-Neusoft/8.21/4.c
 */

#include <stdio.h>
#include <stdlib.h>

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

int main() {
	push('A');
	push('B');
	push('C');
	push('D');
	printf("%c\n", pop());
	printf("%c\n", pop());
	printf("%c\n", pop());
	printf("%c\n", pop());
	return 0;
}