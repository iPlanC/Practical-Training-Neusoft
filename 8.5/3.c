/*
 * @Author: 邴哲松老师
 * @Date: 2020-08-16 15:16:08
 * @LastEditTime: 2020-08-16 15:23:08
 * @FilePath: /Practical-Training-Neusoft/8.5/3.c
 */

#include <stdio.h>

int main(void)
{
	char present, previous = '\0';
	int count = 0;

	printf("Please enter a string:\n");

	while((present = getchar()) != '#')
	{
		if(present == 'i' && previous == 'e')
			count++;
		previous = present;
	}

	printf("ei has appeared %d times.\n", count);

	return 0;
}
