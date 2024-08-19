// 과제20
#include<stdio.h>
int main(void)
{
    int sum = 0,i= 1;
    while (i<101)
    {
        sum = sum+i;
        i++;
    }
    printf("총 합 :%d", sum);
    return 0;
}