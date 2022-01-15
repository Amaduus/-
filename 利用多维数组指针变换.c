#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void grand(int *a)
{
    
    int(*p)[3]=a;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int t=*(*(p + i) + j) ;
            *(*(p + i) + j) = *(*(p + j) + i);
            *(*(p + j) + i) = t;
            if (j == 2)
            break;
        }
        break;
    }
    int t = *(*(p + 1) + 2);
    *(*(p + 1) + 2) = *(*(p + 2) + 1);
    *(*(p + 2) + 1) = t;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", *(*(p + i) + j));          
        }
        if (i == 2)
            break;
        printf("\n");
    }
   
}
    
int main()
{
    int a[3][3] ;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
    }
    grand(a);
    
    return 0;
}