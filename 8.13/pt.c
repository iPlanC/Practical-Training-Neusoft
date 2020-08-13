/*
 * @Author: PlanC
 * @Date: 2020-08-13 11:17:05
 * @LastEditTime: 2020-08-13 11:21:45
 * @FilePath: /Practical-Training-Neusoft/8.13/pt.c
 */
#include <stdio.h>

int main() {
    int *pt;
    printf("pt = %p\n", *pt);
    //Segmentation fault
    return 0;
}