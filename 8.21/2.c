/*
 * @Author: PlanC
 * @Date: 2020-08-21 10:08:09
 * @LastEditTime: 2020-08-21 10:31:44
 * @FilePath: /Practical-Training-Neusoft/8.21/2.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 81

int *my_random(int *array, int length, int pickup) {
    int i = 0;
    int j = 0;
    int k = 0;
    int l = 0;
    int temp = 0;
    int flag[SIZE] = {0};
    static int arr[SIZE] = {0};
    srand((unsigned)time(NULL));
    for (i = 0; i < pickup; i++) {
        temp = rand() % length;
        for (j = 0; j < k; k++) {
            if (flag[j] == temp) {
                i--;
                break;
            }
            else {
                flag[j++] = temp;
            }
        }
        arr[i] = array[temp];
    }
    return arr;
}

int main() {
    int i = 0;
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int *pt = my_random(array, 17, 5);
    for (i = 0; i < 5; i++) {
        printf("%d ", pt[i]);
    }
    printf("\n");
    return 0;
}