// 과제 48
// 소수 판별하는 함수를 이용해서 2부터 10까지의 수에 대해 소수인지 아닌지를 출력하는 순서도와 C 프로그램을 작성하여라

#include <stdio.h>
void func(int b);
int main(void)
{
    int a;
    
    for(a=1;a<11;a++)
    {   
        func(a);
        
    }
}

void func(int b)
{
    int i,c;
    c=0;
    for(i=1;i<=b;i++)
        {if(b%i==0)
            c=c+1;
        }
    if (c==2)
     printf("%d소수입니다.\n",b);
}

// <실행 결과>
// 2소수입니다.
// 3소수입니다.
// 5소수입니다.
// 7소수입니다.