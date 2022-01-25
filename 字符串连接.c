#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include <stdio.h> 
#include<string.h>

void combine(char*a, char*b,int m,int n)
{
    char* p;
    int o=0;
    int cou = m + n;
    p = (char*)malloc(cou* sizeof(char*));
    for (int i = 0; i < cou; i++)
    {
        if (i < m)
            p[i] = a[i];
        else
        {
            p[i] = b[o++]; 
        }
    }
    p[cou] = '\0';
    puts(p);
    /*for (int i = 0; i < cou+1; i++)
    {
        printf("%c", p[i]);
    }*/
}
int main()
{
    
        char a[1000], b[1000];
        gets(a);
        gets(b);
        int n1 = strlen(a);       
        int n2 = strlen(b);       
        combine(a, b, n1,n2);        
    
	return 0;
}
