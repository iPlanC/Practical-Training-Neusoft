/*
 * @Author: 邴哲松老师
 * @Date: 2020-08-12 09:28:33
 * @LastEditTime: 2020-08-12 12:21:17
 * @FilePath: \Practical-Training-Neusoft\8.12\2.c
 */

#include <stdio.h>

#define MAXTITLE 81
#define MAXAUTH 81
#define MAXBKS 100

struct book {
	char title[MAXTITLE];
	char author[MAXAUTH];
	float price;
};

int main(void) {
	struct book library[MAXBKS];
	int count = 0;
	int i;

	printf("Please enter the book title:\n");

	while (count < MAXBKS && gets(library[count].title) &&
		   library[count].title[0] != '\0') {
		printf("Now enter the author:\n");
		gets(library[count].author);
		printf("Now enter the price:\n");
		scanf("%f", &library[count].price);
		getchar();
		count++;
		if (count < MAXBKS) {
			printf("Please enter the book title:\n");
		}
	}

	if (count > 0) {
		printf("List of books:\n");
		printf("title\t\tauthor\t\tprice\n");
		for (i = 0; i < count; i++)
			printf("<<%s>>\tby %s:\t%.2f\n", library[i].title,
				   library[i].author, library[i].price);
	} else {
		printf("No books.\n");
	}
	return 0;
}
