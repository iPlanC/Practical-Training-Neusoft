/*
 * @Author: PlanC
 * @Date: 2020-08-13 14:05:38
 * @LastEditTime: 2020-08-21 18:28:45
 * @FilePath: /Practical-Training-Neusoft/8.13/7.c
 */

/* 函数指针：
 *	void (*pf)(char *)
 *	重点在指针，指向函数的指针，指向函数的指针中保存着函数代码的起始地址。
 *	pf是一个指向函数的指针，该指针可以指向返回值为 void 且形参仅有一个且为 char * 的函数。
 *		void (*pf)(char *);
 *		pf = void ToUpper(char *); 		// 此时pf函数指针可以指向ToUpper函数
 *		pf = ToUpper();					// 此时ToUpper不算函数名，而是调用函数
 *		pf = int round(double);			// 此时pf函数指针不可以指向round函数（返回值和形参不匹配）
 *	函数名可以用来表示函数的地址
 *
 * 指针函数：
 *	void *pf(char *)
 *	重点在函数，指针函数是指函数的返回值是指针类型。
 *	pf是函数名，它包含一个 char * 指针类型的参数，返回值是指针类型 void * 。
 */

#include <stdio.h>
#include <string.h>

void ToUpper(char *str) {
	int i = 0;
	for (i = 0; i < strlen(str); i++) {
		if (str[i] >= 97 && str[i] <= 122) {
			str[i] = str[i] - 32;
		}
	}
}

void ToLower(char *str) {
	int i = 0;
	for (i = 0; i < strlen(str); i++) {
		if (str[i] >= 65 && str[i] <= 90) {
			str[i] = str[i] + 32;
		}
	}
}

void show(void (*pf)(char *), char *str) {
	(*pf)(str);
	puts(str);
}

int main() {
	char flag = '\0';
	char str[100] = {'\0'};
	puts("input a string");
	while (fgets(str, sizeof(str), stdin) && str[0] != '\0') {
		puts("Upper or Lower?");
		scanf("%c", &flag);
		getchar();
		if (flag == 'l') {
			show(ToLower, str);
		}
		if (flag == 'u') {
			show(ToUpper, str);
		}
		puts("input a string");
	}
	return 0;
}