// 예제55
// 함수 이용해서 1부터 10까지의 약수 구하기
// 임의의 수에 대한 약수 구하는 func 함수를 이용해서 1부터 10까지의 수에 대한 약수를 구한다.

#include <stdio.h>
void func(int b);
int main(void)
{
    int a;
    
    for(a=1;a<11;a++)
    {   printf("%d의 약수:",a);
        func(a);
        printf("\n");}
}

void func(int b)
{
    int i;
    for(i=1;i<=b;i++)
        {if(b%i==0)
            printf("%3d",i);}
}

// <실행 결과>
// 1의 약수:  1
// 2의 약수:  1  2
// 3의 약수:  1  3
// 4의 약수:  1  2  4
// 5의 약수:  1  5
// 6의 약수:  1  2  3  6
// 7의 약수:  1  7
// 8의 약수:  1  2  4  8
// 9의 약수:  1  3  9
// 10의 약수:  1  2  5 10
