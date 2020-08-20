/*
 * @Author: PlanC
 * @Date: 2020-08-20 12:05:58
 * @LastEditTime: 2020-08-20 13:24:08
 * @FilePath: /Practical-Training-Neusoft/8.20/2_2.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Data {
	struct Data *before;
	char context;
	struct Data *next;
};

struct Data *head;
struct Data *pt;

void init() {
	head = (struct Data *)malloc(sizeof(struct Data));
	pt = head;
}

void save(char *str) {
	int i = 0;
	for (i = 0; i < strlen(str); i++) {
		struct Data *temp = (struct Data *)malloc(sizeof(struct Data));
		temp->before = pt;
		temp->context = str[i];
		temp->next = NULL;
		pt->next = temp;
		pt = pt->next;
	}
}

void dedup() {
	struct Data *temp;
	pt = head;
	while (pt->next) {
		pt = pt->next;
		temp = head;
		while (temp->next != pt) {
			temp = temp->next;
			if (temp->context == pt->context) {
				pt->before->next = pt->next;
				pt->next->before = pt->before;
				break;
			}
		}
	}
}

int is_empty() {
	return head == NULL;
}

int main() {
	init();
	save("652352684971");
	dedup();
	pt = head;

	printf("source: 652352684971\nresult: ");
	while (pt->next) {
		pt = pt->next;
		printf("%c", pt->context);
	}
	printf("\n");
	printf("target: 652384971\n");

	return 0;
}