/*
 * @Author: 邴哲松老师
 * @Date: 2020-08-19 14:08:24
 * @LastEditTime: 2020-08-21 18:30:14
 * @FilePath: /Practical-Training-Neusoft/8.19/4.c
 */

#include <stdio.h>
#include <string.h>

#define SIZE	81

char *mystrncpy(char *s1, char *s2, int num);

int main(void)
{
	char s1[SIZE];
	char s2[SIZE];
	int n;

	printf("Please enter a string for s2:\n");
	while(fgets(s2, sizeof(s2), stdin) && s2[0] != '\0')
	{
		printf("Please enter a number you want to copy:\n");
		scanf("%d", &n);
		getchar();
		mystrncpy(s1, s2, n);
		printf("s1 = %s\n", s1);
		printf("Please enter a string for s2:\n");
	}

	return 0;
}

char *mystrncpy(char *s1, char *s2, int num)
{
	int i;
	
	for(i = 0; i < num; i++)
		*(s1 + i) = *(s2 + i);
	if(strlen(s2) >= num)
		*(s1 + i) = '\0';

	return s1;
}