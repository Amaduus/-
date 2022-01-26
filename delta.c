#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//将三个数从小到大排序
void sort(double* pa, double* pb, double* pc)
{
    double a[3];
    a[0] = *pa;
    a[1] = *pb;
    a[2] = *pc;

    int i, j;
    double tmp;
    for (i = 0; i < 2; i++)
    {
        for (j = i; j < 3; j++)
        {
            if (a[i] > a[j])
            {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

    *pa = a[0];
    *pb = a[1];
    *pc = a[2];
}

int main(void)
{
    int res[10];
    int residx = 0;

    double a, b, c;
    while (scanf("%lf%lf%lf", &a, &b, &c) == 3.0)
    {
        sort(&a, &b, &c);
        if ((a + b) > c && (c - a) < b)
            res[residx] = 1;
        else
            res[residx] = 0;

        residx++;
    }

    int i;
    for (i = 0; i < residx; i++)
    {
        if (res[i] == 1)
        {
            double p, s;
            p = 0.5 * (a + b + c);
            s = sqrt(p * (p - a) * (p - b) * (p - c));
            printf("面积：%.2lf", s);
        }
        else
            printf("无法构成三角形");


        return 0;
    }
}