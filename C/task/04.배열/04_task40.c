// 과제 40
// 입력 받은 10진수를 8진수로 변환하여 출력하는 순서도와 C 프로그램 을 작성하여라

#include <stdio.h>

int main(void)
{
    int a,b,i,ct;
    int c[100];
    printf("10진수를 입력하세요: ");
    scanf("%d", &a);
    ct=0;

    for (i=0;8<a;i++)
    {
        b=a%8;
        a=a/8;
        c[i]=b;
        ct=ct+1;
    }
    printf("%d",a);
    for (i=0;i<ct;i++)
        printf("%d",c[ct-i-1]);
        
}

// <실행 결과>
// 10진수를 입력하세요: 55
// 67