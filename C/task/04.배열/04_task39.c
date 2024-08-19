// 과제39
#include<stdio.h>
#include<stdlib.h>


int main(void)
{
    int min = 0,i, j, a[10];
    for (i=0; i<10; i++)
        a[i] = rand()%100;
    for (i=0; i<10; i++)
        printf("%d ", a[i]);
    for (i=0; i<10; i++)
    {
        for (j =0; j<9-i; j++)
        {
            if (a[j] >a[j+1])
            {
                min = a[j];
                a[j]= a[j+1];
                a[j+1] = min;
            }
        }
    }
    printf("최솟값 : %d ", a[0]);
    return 0;
}