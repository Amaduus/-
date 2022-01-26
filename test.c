#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int i, j[100], k = 0;
	char end[100] = { "End of file" };//用于判断是否结束
	while (gets(s))
	{
		if (strcmp(s, end) == 0) return 0;//判断是否结束
		else//去掉空格
		{
			for (i = 0, k = 0; i < strlen(s); i++)//记录空格位置
			{
				if (s[i] == ' ')
				{
					j[k] = i;					k++;				}			}
			for (i = 0, k = 0; i < strlen(s); i++)//跳过空格位置输出字符
			{
				if (i != j[k])
					printf("%c", s[i]);
				else
					k++;
			}
			printf("\n");
		}

	}

}