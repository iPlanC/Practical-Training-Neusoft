/*
 * @Author: PlanC
 * @Date: 2020-08-12 11:27:15
 * @LastEditTime: 2020-08-12 12:10:54
 * @FilePath: /Practical-Training-Neusoft/8.12/3.c
 */
#include <stdio.h>
#include <string.h>

struct MONTH{
    char name[36];
    int days[13];
    int index[13];
};

int main() {
    int i = 0;
    int totaldays = 0;
    char input[3] = {"\0"};
    struct MONTH month = {
        "JanFebMarAprMayJunJulAugSepOctNovDec",
        {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12},
    };
    while (gets(input) && input[0] != '\0') {
        for (i = 0; strncmp(input, &month.name[i], 3); i+=3) {
            totaldays = totaldays + month.days[i / 3];
            printf("+%d\n", month.days[i / 3]);
        }
        printf("Jan to %s has %d days\n", input, totaldays);
        totaldays = 0;
    }
    return 0;
}