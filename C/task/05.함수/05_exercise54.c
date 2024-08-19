// 예제54
#include<stdio.h>
int func(void);

int main(void)
{
    func();
    return 0;
}

int func(void)
{
    int a,b,c;
    printf("정수 3개를 입력하시오: ");
    scanf("%d %d %d", &a,&b,&c);
    if (a >b)
        printf("가장 큰 수: %d",a>c?a:c);
    else
        printf("가장 큰 수: %d",b>c?b:c);
    return 0;
}