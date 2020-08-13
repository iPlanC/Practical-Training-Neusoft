/*
 * @Author: PlanC
 * @Date: 2020-08-13 09:40:19
 * @LastEditTime: 2020-08-13 16:03:44
 * @FilePath: /Practical-Training-Neusoft/8.13/4.c
 */

#include <stdio.h>
#include <string.h>

#define SIZE 30

struct NAME {
    char first[SIZE];
    char last[SIZE];
    int size;
};

void showinfo(struct NAME name) {
    printf("%s %s, your name has %d char\n", name.first, name.last, name.size);
}

void makeinfo(struct NAME name) {
    name.size = strlen(name.first) + strlen(name.last);
    showinfo(name);
}

void getinfo() {
    struct NAME name;
    printf("input your name\n");
    scanf("%s %s", name.first, name.last);
    name.size = 0;
    makeinfo(name);
}

int main() {
    getinfo();
    return 0;
}
