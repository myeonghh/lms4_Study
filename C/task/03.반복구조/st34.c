#include <stdio.h>

int main()
{
    int sum, i, n;
    sum = 0;
    n = 0;
    for(i = 1; i <= 5; i++)
    {
        n = n + i;
        sum = sum + n;
        
    }
    printf("합: %d\n", sum);
}