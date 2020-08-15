/*
 * @Author: 邴哲松老师
 * @Date: 2020-08-14 15:08:55
 * @LastEditTime: 2020-08-15 10:32:42
 * @FilePath: /Practical-Training-Neusoft/8.14/2_2.c
 */

#include <stdio.h>

int onbits(int n);
char *dec_to_binstr(int num, char *pt);

int main(void)
{
	int value;
	char binstr[33];

	printf("Please enter a integer:\n");
	while(scanf("%d", &value) == 1 && value >= 0)
	{
		printf("%d(%s) has %d bits on.\n", value, dec_to_binstr(value, binstr), onbits(value));
		printf("Please enter a integer:\n");
	}

	return 0;
}

int onbits(int n)
{
	int i;
	int count = 0;

	for(i = 0; i < 32; i++, n >>= 1)
		if((n & 1) == 1)
			count++;

	return count;
}

char *dec_to_binstr(int num, char *pt)
{
	int i;

	for(i = 31; i >=0; i--, num >>= 1)
		pt[i] = (num & 1) + '0';

	pt[32] = '\0';

	return pt;
}