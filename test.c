#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int i, j[100], k = 0;
	char end[100] = { "End of file" };//�����ж��Ƿ����
	while (gets(s))
	{
		if (strcmp(s, end) == 0) return 0;//�ж��Ƿ����
		else//ȥ���ո�
		{
			for (i = 0, k = 0; i < strlen(s); i++)//��¼�ո�λ��
			{
				if (s[i] == ' ')
				{
					j[k] = i;					k++;				}			}
			for (i = 0, k = 0; i < strlen(s); i++)//�����ո�λ������ַ�
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