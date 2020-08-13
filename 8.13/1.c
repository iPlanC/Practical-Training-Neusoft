/*
 * @Author: PlanC
 * @Date: 2020-08-13 09:04:56
 * @LastEditTime: 2020-08-13 09:17:10
 * @FilePath: /Practical-Training-Neusoft/8.13/1.c
 */
#include <stdio.h>
#define SIZE 10

struct scores {
    char name[SIZE];
    double Chinese;
    double Math;
    double English;
};

double sum(double x1, double x2, double x3) {
    return x1 + x2 + x3;
}

int main() {
    struct scores fellow = {
        "Jerry",
        120,
        115,
        118
    };
    printf("%.2lf\n", sum(fellow.Chinese, fellow.Math, fellow.English));

    return 0;
}