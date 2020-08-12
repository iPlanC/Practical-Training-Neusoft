/*
 * @Author: PlanC
 * @Date: 2020-08-12 15:32:57
 * @LastEditTime: 2020-08-12 16:15:58
 * @FilePath: \Practical-Training-Neusoft\8.12\6.c
 */
#include <stdio.h>
#include <string.h>

struct MONTH {
    char name[10];
    char shortname[3];
    char index[2];
    int days;
};

struct MONTH month[12] = {
    {"January", "Jan", "1", 31},   {"February", "Feb", "2", 28},
    {"March", "Mar", "3", 31},     {"April", "Apr", "4", 30},
    {"May", "May", "5", 31},       {"June", "Jue", "6", 30},
    {"July", "Jul", "7", 31},      {"August", "Aug", "8", 31},
    {"September", "Sep", "9", 30}, {"October", "Oct", "10", 31},
    {"November", "Nov", "11", 30}, {"December", "Dec", "12", 31},
};

int days();

int main() {
    int i = 0;
    int totaldays = 0;
    int input = 0;
    printf("%d days in total\n", days());
    return 0;
}

int days() {
    int i = 0;
    int input_year = 0;
    char input_month[10] = {'\0'};
    int input_day = 0;
    int totaldays = 0;

    puts("input year");
    scanf("%d", &input_year);

    if ((input_year % 4 == 0 && input_year % 100 != 0) ||
        (input_year % 400 == 0)) {
        month[1].days = 29;
    } else {
        month[1].days = 28;
    }

    puts("input month:");
    scanf("%s", input_month);
    for (i = 0; i < 12; i++) {
        if (strcmp(input_month, month[i].name) == 0 ||
            strcmp(input_month, month[i].shortname) == 0 ||
            strcmp(input_month, month[i].index) == 0) {
            break;
        }
        totaldays = totaldays + month[i].days;
        printf("+%d\n", month[i].days);
    }
    puts("input day:");
    scanf("%d", &input_day);

    return (totaldays + input_day);
}
