#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define min(a,b) ((a)>(b)?(b):(a))
#define max(a,b) ((a)>(b)?(a):(b))
int square[100][100],s[100][100];

int main()
{
	int m,n;
	scanf("%d %d", &m,&n);
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			scanf("%d,", &square[i][j]);
			s[i][j] = square[i][j] + s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1];
		}
	int ans=0,max1=ans;
	for(int i=0;i<m;i++)
		for (int j = 0; j < n; j++)
		{
			if (!square[i][j]) continue;
			int d = min(m - i, n - j);
			//int l = 0, r = d + 1, mid;
			for (int k = 1; k <= d; k++)
			{
				if (s[i + k-1][j + k-1] - s[i-1][j + k-1] - s[i + k-1][j-1] + s[i-1][j-1] == k * k) ans = max(k, ans);
			}
		}
	printf("%d", ans);

	return 0;
}

