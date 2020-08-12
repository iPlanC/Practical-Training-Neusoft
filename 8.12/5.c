/*
 * @Author: PlanC
 * @Date: 2020-08-12 15:15:01
 * @LastEditTime: 2020-08-12 15:21:13
 * @FilePath: /Practical-Training-Neusoft/8.12/5.c
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
    struct person *him = NULL;
    struct person fellow = {
        {"Micheal", "Bay"},
        "salad",
        "director",
        2500
    };
    printf("struct variable\n");
    printf("name is :%s %s\n", fellow.name.first, fellow.name.last);
    printf("favorite food is :%s\n", fellow.favfood);
    printf("job is :%s\n", fellow.job);
    printf("income is :$%.2lf\n", fellow.income);

    him = &fellow;
    printf("struct pointer\n");
    printf("name is :%s %s\n", him->name.first, him->name.last);
    printf("favorite food is :%s\n", him->favfood);
    printf("job is :%s\n", him->job);
    printf("income is :$%.2lf\n", him->income);
    return 0;
}