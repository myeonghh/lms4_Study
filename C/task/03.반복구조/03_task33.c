// 과제33
// 다음과 같이 과제 출력하는 순서도와 C 프로그램을 각각 작성하여라.

#include <stdio.h>

int main(void)
{
    int a, b, c;

    for(a=1;a<6;a++)
    {
        for(b=0;b<a;b++)
        {
            printf("%d",a);
        }
        printf("\n");
    }

    printf("\n");

    for(a=6;a>0;a--)
    {
        for(b=1;b<a;b++)
        {
            printf("%d",b);
        }
        printf("\n");
    }

    c=5;
    for(a=0;a<6;a++)
    {
        c=5-a;
        for(b=5;b>a;b--)
        {
            printf("%d",c);
            c=c-1;
        }
        printf("\n");
        
    }
    return 0;
}

// <실행 결과>
// 1
// 22
// 333
// 4444
// 55555

// 12345
// 1234
// 123
// 12
// 1

// 54321
// 4321
// 321
// 21
// 1