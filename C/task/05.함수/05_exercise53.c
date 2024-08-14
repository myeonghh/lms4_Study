// 예제 53
// 함수 이용해서 두 수 중 큰 수 찾기
// 두 수를 입력받고, 그 중 큰 수를 찾아 반환한다.
// 반환하는 로직은 func 함수를 정의하고 사용해서 두 수 중 큰 수를 찾는다.

#include <stdio.h>
int func(int, int);

int main(void)
{
    int a, b;
    printf("정수 2개를 입력하세요: ");
    scanf("%d %d", &a, &b);
    printf("큰 수는 : %d\n", func(a, b));
    return 0;
}

int func(int num1, int num2)
{
    return (num1 > num2)? num1 : num2;
}

// <실행 결과>
// 정수 2개를 입력하세요: 4 9
// 큰 수는 : 9