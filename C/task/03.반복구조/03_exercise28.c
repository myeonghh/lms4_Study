// 예제28
#include<stdio.h>
int main(void)
{
    int i, num, pr = 0;
    printf("정수를 입력하시오: ");
    scanf("%d", &num);
    for (i =1; i< num+1; i++)
    {    
        if (num%i == 0)
            pr++;
    }
    if (pr ==2)
        printf("%d는 소수입니다", num);
    else
        printf("%d는 소수가 아닙니다", num);

    return 0;
}