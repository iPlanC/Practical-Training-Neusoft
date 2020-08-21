/*
 * @Author: PlanC
 * @Date: 2020-08-12 14:13:07
 * @LastEditTime: 2020-08-21 18:26:11
 * @FilePath: /Practical-Training-Neusoft/8.12/4.c
 */

#include <stdio.h>

#define SIZE 20

struct names {
	char first[SIZE];
	char last[SIZE];
};

struct person {
	struct names name;
	char favfood[SIZE];
	char job[SIZE];
	float income;
};

int main() {
	struct person fellow = {
		{"Micheal", "Bay"},
		"salad",
		"director",
		2500
	};
	printf("name is :%s %s\n", fellow.name.first, fellow.name.last);
	printf("favorite food is :%s", fellow.favfood);
	printf("job is :%s", fellow.job);
	printf("income is :$%f", fellow.income);
	return 0;
}
