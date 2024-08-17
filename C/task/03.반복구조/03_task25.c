// 과제25
// while형 반복 구조를 이용해서 1, -2, 3, -4, ..., 99, -100의 합을 구해 출력하는 순서도와 C 프로그램을 작성하여라.

#include <stdio.h>

int main(void)
{
    int a,sum,b,sum1;
    sum=0;
    sum1=0;
    for(b=1;b<101;b=b+2)
        sum = sum+b;
    //printf("%d",sum);

    for(a=-2;a>-101;a=a-2)
        sum1=sum1+a;
    printf("%d\n\n",sum+sum1+1);
}

// <실행 결과>
// -49