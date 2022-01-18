

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main()
{
    int num,count=0,item[1001];
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        int k = 0, num2 = 0;
        for (int j = 1; j < i; j++)
        {            
            if (i % j == 0)
            {                                
                num2 += j;    
                item[k++] = j;
            }
        }
        if (i == num2)
        {
            printf("%d its factors are",i);

            for (int i = 0; i < k; i++)
            {
                printf(" %d",item[i]);
            }
            printf("\n");
        }
    }   
               
    return 0;
}