/*
 * @Author: PlanC
 * @Date: 2020-08-13 09:40:19
 * @LastEditTime: 2020-08-13 11:35:59
 * @FilePath: /Practical-Training-Neusoft/8.13/5.c
 */
#include <stdio.h>
#include <string.h>
#define SIZE 30

struct NAME {
    char first[SIZE];
    char last[SIZE];
    int size;
};

void showinfo(struct NAME *name) {
    printf("%s %s, your name has %d char\n", name->first, name->last, name->size);
}

void makeinfo(struct NAME *name) {
    name->size = strlen(name->first) + strlen(name->last);
}

void getinfo(struct NAME *name) {
    printf("input your name\n");
    scanf("%s %s", name->first, name->last);
    name->size = 0;
}

int main() {
    struct NAME name;
    getinfo(&name);
    makeinfo(&name);
    showinfo(&name);
    return 0;
}
