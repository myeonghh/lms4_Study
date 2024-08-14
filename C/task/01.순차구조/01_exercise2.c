// 사용자에게 입력받은 수 덧셈, 곱셈
#include <stdio.h>

int main(void)
{
    int a, b, add, mul;

    printf("정수 2개를 입력하세요: ");
    scanf("%d %d", &a, &b);

    add = a + b;
    mul = a * b;

    printf("덧셈: %d\n", add);
    printf("곱셈: %d\n", mul);

    return 0;
}

// <실행 결과>
// 정수 2개를 입력하세요: 5 7
// 덧셈: 12
// 곱셈: 35