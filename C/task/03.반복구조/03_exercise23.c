// 예제 23
// 1, -2, 3, -4, ..., 99, -100의 합 구하기
// i가 1부터 1씩 증가하며 100이 될 때까지 반복하며 i가 홀수면 sum에 i 값을 더하고, i가 짝수면 sum에서 i 값을 뺀다.

#include <stdio.h>
int main(void)
{
    int sum = 0;
    for (int i = 1; i < 101; i++){
        sum = (i % 2 == 0)? sum - i : sum + i;
    }
    printf("%d\n", sum);

    return 0;
}

// <실행 결과>
// -50