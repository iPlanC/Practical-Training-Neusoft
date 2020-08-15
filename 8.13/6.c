/*
 * @Author: PlanC
 * @Date: 2020-08-13 11:14:50
 * @LastEditTime: 2020-08-13 16:03:54
 * @FilePath: /Practical-Training-Neusoft/8.13/6.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct NAME {
	char *first;
	char *last;
	int size;
};

void showinfo(struct NAME *name) {
	printf("%s %s, your name has %d char\n", name->first, name->last, name->size);
}

void makeinfo(struct NAME *name) {
	name->size = strlen(name->first) + strlen(name->last);
	showinfo(name);
}

void getinfo(struct NAME *name) {
	char temp[80];
	
	puts("input your first name");
	gets(temp);
	name->first = (char *)malloc(strlen(temp) + 1);
	strcpy(name->first, temp);

	puts("input your last name");
	gets(temp);
	name->last = (char *)malloc(strlen(temp) + 1);
	strcpy(name->last, temp);
	name->size = 0;
}

void cleanup(struct NAME *name) {
	free(name->first);
	free(name->last);
}

int main() {
	struct NAME name;
	getinfo(&name);
	makeinfo(&name);
	showinfo(&name);
	cleanup(&name);
	return 0;
}