// 과제29
// 세 수의 공약수를 출 과제 력하는 순서도와 C 프로그램을 작성하여라.

#include <stdio.h>

int main(void)
{
    int a,b,c,i;
    printf("정수 3개를 입력하세요: ");
    scanf("%d%d%d",&a,&b,&c);
    printf("%3d",1);
    for(i=2;i<a;i++)
        if(a%i==0 && b%i==0 && c%i==0)
            printf("%3d",i);
}

// <실행 결과>
// 정수 3개를 입력하세요: 12 18 24
//   1  2  3  6