#include <stdio.h>

int main()
{
    int n1, n2, i;
    scanf("%d%d", &n1, &n2);
    printf("정수(2개): %d %d\n",n1,n2);
    for(i = 1; i <= n1; i++)
    {
        if(n1 % i == 0 && n2 % i == 0)
            printf("%d ", i);
    }
    printf("\n");
        
}