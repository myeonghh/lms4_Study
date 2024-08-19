// 과제43
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int temp,maxindex, max, j, i,a[10];
    for (i=0; i<10; i++)
    {
        a[i]= rand()%100;
        printf("%d ", a[i]);
    }
    printf("\n");
    for (i= 0; i< 10; i++)
    {
        max = 0;
        for (j=i; j<10; j++)
        {
            if (a[j] >max)
            {
                max= a[j];
                maxindex= j;
            }
        }
        temp = a[maxindex];
        a[maxindex] =a[i];
        a[i] = temp; 
    }
    for (i=0; i<10; i++)
        printf("%d ", a[i]);
    return 0;
}