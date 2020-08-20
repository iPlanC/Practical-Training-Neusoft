/*
 * @Author: PlanC
 * @Date: 2020-08-20 12:05:58
 * @LastEditTime: 2020-08-20 13:31:14
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

int main(int argc, char *argv[]) {
	if (argc != 3) {
		printf("Usage: %s <integer> <filename>", argv[0]);
		exit(1);
	}

	FILE *fp = NULL;
	if ((fp = fopen(argv[2], "w")) == NULL) {
		printf("can't open file \"%s\"", argv[2]);
		exit(2);
	}
	rewind(fp);
	fputs(argv[1], fp); fclose(fp);

	init();
	save(argv[1]);
	dedup();
	pt = head;

	if ((fp = fopen(argv[2], "w")) == NULL) {
		printf("can't open file \"%s\"", argv[2]);
		exit(3);
	}
	rewind(fp);
	printf("source: %s\nresult: ", argv[1]);
	while (pt->next) {
		pt = pt->next;
		printf("%c", pt->context);
		fputc(pt->context, fp);
	}
	fclose(fp);
	printf("\n");

	return 0;
}