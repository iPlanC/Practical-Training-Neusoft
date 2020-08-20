/*
 * @Author: PlanC
 * @Date: 2020-08-20 16:00:52
 * @LastEditTime: 2020-08-20 16:13:08
 * @FilePath: /Practical-Training-Neusoft/8.20/4.c
 */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *my_toupper(char *str) {
    int i = 0;
    for (i = 0; i < strlen(str); i++) {
        str[i] = toupper(str[i]);
    }
    return str;
}

char *my_tolower(char *str) {
    int i = 0;
    for (i = 0; i < strlen(str); i++) {
        str[i] = tolower(str[i]);
    }
    return str;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage %s <-pul> <string>", argv[0]);
        exit(0);
    }

    switch (argv[1][1]) {
        case 'p':
            printf("%s\n", argv[2]);
            break;
        case 'u':
            printf("%s\n", my_toupper(argv[2]));
            break;
        case 'l':
            printf("%s\n", my_tolower(argv[2]));
            break;
        default:
            break;
    }
    return 0;
}