#include <stdio.h>

int main()
{
    int num, i, sum;
    sum = 0;
    for(i = 1; i <= 100; i++)
    {
        if(i % 3 != 0)
            sum = sum + i;
        else
            sum = sum + (-i);
    }
    printf("합: %d\n", sum);
}