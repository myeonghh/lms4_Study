// 예제57
// 재귀함수 이용해서 피보나치수열 구하기
// 피보나치수열의 a번째 항은 다음과 같다.
// fibo(a) = 1 (a≤2)
//         = fibo(a-1) + fibo(a-2) (그 외)
// 이런 개념을 이용해서 피보나치수열의 임의의 항을 구하는 fibo 재귀함수를 만들어서 입력 받은 위치에 대한 피보나치수를 구한다.

#include <stdio.h>
long fibo(int);

int main(void)
{
    int num;
    printf("피보나치 항 입력 : ");
    scanf("%d", &num);
    printf("%ld\n", fibo(num));

    return 0;
}

long fibo(int n)
{
    if (n > 2)
        return fibo(n-1) + fibo(n-2);
    else
        return 1;
}

// <실행 결과>
// 피보나치 항 입력 : 7
// 13