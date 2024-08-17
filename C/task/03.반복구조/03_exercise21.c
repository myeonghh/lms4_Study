// 예제 21
// 1부터 100까지의 수 중 짝수의 합 구하기(1)
// i가 2부터 2씩 증가하며 100이 될 때까지 반복하며 sum에 i 값을 더한다.


#include <stdio.h>

int main(void)
{
    int a,sum;
    sum = 0;
    for (a = 2; a < 101; a = a+2)
        sum = sum + a;
    
    printf("%d\n",sum);
}
// <실행 결과>
// 2550