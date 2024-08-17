// 예제 29
// 피보나치수열 구하기

#include <stdio.h>

int main(void)
{
    int a, b, c, i, j;
    printf("피보나치수열 항을 입력하세요: ");
    scanf("%d",&j);
    a = 1;
    b = 1;
    
    printf("%4d%4d",a,b);
    for (i=1,a=1,b=1,c=a+b; i < j-1; i++)
        {
            printf("%4d ",c);
            a= b;
            b= c;
            c= a+b;
        }
}

// <실행 결과>
// 피보나치수열 항을 입력하세요: 8
//    1   1   2    3    5    8   13   21