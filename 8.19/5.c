/*
 * @Author: PlanC
 * @Date: 2020-08-19 16:31:31
 * @LastEditTime: 2020-08-19 17:09:56
 * @FilePath: /Practical-Training-Neusoft/8.19/5.c
 */

#include <stdio.h>
#include <string.h>

#define SIZE 512
#define not !

int head = 0;
int tail = 0;
char queue[SIZE];

void enqueue(char c) {
	queue[tail] = c;
	tail = (tail + 1) % SIZE;
}

char dequeue() {
	char ch;
	ch = queue[head];
	head = (head + 1) % SIZE;
	return ch;
}

int is_empty() {
	return head == tail;
}

int is_full() {
	return head == (tail + 1) % SIZE;
}

int main() {
	int i = 0;

	printf("input a string:\n");
	while (gets(queue) && queue[0] != '\n') {
		tail = strlen(queue);
		while (not is_empty()) {
			printf("%c", dequeue());
			enqueue(dequeue());
		}
		printf("\n");
	}
	return 0;
}