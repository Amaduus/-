

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
	


int max(int a, int b)
{
    if (a > b)
   return a;
    else
        return b;

}

int main()
{




    int a[3];
    int i = 0;
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);

    }
    int mass = max(a[0], a[1]);
    int mass2 = max(mass, a[2]);
    printf("%d", mass2);
    return 0;
}