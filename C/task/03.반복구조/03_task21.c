// 과제21
// 1부터 입력받은 수까지의 합을 출력하는 순서도와 C 프로그램을 작성하여라.

#include <stdio.h>

int main(void)
{
    int a,sum,b;
    sum=0;
    printf("정수를 입력하세요: ");
    scanf("%d",&a);
    for (b=1;b<a+1;b++)
        sum = sum+b;
        printf("%d",sum);
}

// <실행 결과>
// 정수를 입력하세요: 10
// 55