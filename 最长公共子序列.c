#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int dp[1001][1001];
int maxi(int a, int b)
{
	if (a > b) return a;
	else return b;
}//最大值函数 

int size(char str[])
{
	int i = 0;
	while (str[i] != '\0') i++;
	return i;
}//指向数组末尾 

int find(char* str1, char* str2)
{
	int i, j;
	
	if (size(str1) == 0 || size(str2) == 0)   return 0;
	for (i = 1; i <= size(str1); i++)
		for (j = 1; j <= size(str2); j++)
		{
			if (str1[i - 1] == str2[j - 1]) dp[i][j] = dp[i - 1][j - 1] + 1;
			else
				dp[i][j] = maxi(dp[i - 1][j], dp[i][j - 1]);
		}
	return dp[size(str1)][size(str2)];
}//动态规划求解 
int main()
{
	int n, i;
	char str1[1001], str2[1001];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%s", str1);
		scanf("%s", str2);
		printf("%d\n", find(str1, str2));
	}
	return 0;

}
