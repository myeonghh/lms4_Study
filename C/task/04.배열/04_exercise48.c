// 예제48
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
    int i,j ,a[5], ar;
    for (i=0; i<5; i++)
    {
        a[i] = rand()%100;
    }
    for (i=0; i<5; i++)
        printf("%d ", a[i]);
    printf("\n");
    for (i=0; i<5; i++)
    {
        for (j =0; j<4-i; j++)
        {
            if (a[j] >a[j+1])
            {
                ar = a[j];
                a[j]= a[j+1];
                a[j+1] = ar;
            }
        }
    }
    for (i=0; i<5; i++)
        printf("%d ", a[i]);
    return 0;
}