// 예제20
#include<stdio.h>
int main(void)
{
    int i,sum = 0;
    for (i=1; i<101; i++)
    {
        sum = sum+ i;
    }
    printf("더한값: %d", sum);
    return 0;
}