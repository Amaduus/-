#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main()
{
	int c, m;
	while ((c = getchar()) != '\n')
	{
		if (c >= 'A' && c <= 'Z')
		{
			printf("%c", c + 32);
		}
		else
			printf("%c", c);
	}
	return 0;
}