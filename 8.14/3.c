/*
 * @Author: PlanC
 * @Date: 2020-08-14 15:46:25
 * @LastEditTime: 2020-08-19 11:50:32
 * @FilePath: /Practical-Training-Neusoft/8.14/3.c
 */

#include <math.h>
#include <stdio.h>
#include <string.h>

int Bin2Dec(char *str) {
	int i = 0;
	int total = 0;
	for (i = strlen(str) - 1; i >= 0; i--) {
		total = total + (int)(((int)str[strlen(str) - i - 1] - 48) * pow(2.0, (double)i));
	}
	return total;
}

char *dec_to_binstr(int num, char *pt) {
	int i;

	for(i = 31; i >=0; i--, num >>= 1) {
		pt[i] = (num & 1) + '0';
	}

	pt[32] = '\0';

	return pt;
}

int main(int argc,char *argv[]) {
	char binstr[33] = {'\0'};
	char binstr1[33] = {'\0'};
	char binstr2[33] = {'\0'};
	int number1 = Bin2Dec(argv[1]);
	int number2 = Bin2Dec(argv[2]);

	printf("~arg1 = %s\n", dec_to_binstr(~number1, binstr1));
	printf("~arg2 = %s\n", dec_to_binstr(~number2, binstr2));

	printf("arg1 & arg2 = %s\n", dec_to_binstr((number1 & number2), binstr));
	printf("arg1 | arg2 = %s\n", dec_to_binstr((number1 | number2), binstr));
	printf("arg1 ^ arg2 = %s\n", dec_to_binstr((number1 ^ number2), binstr));

	return 0;
}
