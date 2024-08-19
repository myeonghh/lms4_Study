#include <stdio.h>

int main()
{
    int max, a, i;
    scanf("%d", &a);
    printf("정수 : %d\n", a);
    max = a;
    for(i = 1; i <= 5; i++)
    {
        scanf("%d", &a);
        printf("정수 : %d\n", a);
        if(max < a)
            max = a;
    }
    printf("최댓값: %d\n", max);
    
}