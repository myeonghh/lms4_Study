#include <stdio.h>

int main()
{
    int i, n, cnt;
    scanf("%d", &n);
    printf("정수: %d\n", n);
    cnt = 0;
    for(i =1; i <= n; i++)
    {
        if(n % i == 0)
            cnt = cnt + 1;  
    }
    if(cnt == 2)
        printf("소수\n");
    else
        printf("소수아님\n");
    
}