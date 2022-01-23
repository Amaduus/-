#include<stdio.h>
#include<string.h>

int exchange(char a[], char b[])
{
    int i, l, j = 0;
    l = strlen(a);
    for (i = l - 1; i >= 0; i--) {
        b[j] = a[i];
        j++;
    }
    b[j] = '\0';       //给末尾加上结束符。
    return 0;
}

int main()
{
    char a[1000], b[1000];
    gets(a);
    exchange(a, b);
    puts(b);
    return 0;
}