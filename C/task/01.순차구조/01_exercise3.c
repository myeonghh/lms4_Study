// 사용자에게 입력받은 숫자 몫, 나머지
#include <stdio.h>

int main(void)
{
    int a, b;
    printf("정수 2개를 입력하세요: ");
    scanf("%d %d", &a, &b);
    printf("몫: %d\n", a / b);
    printf("나머지: %d\n", a % b);
}

// <실행결과>
// 정수 2개를 입력하세요: 10 3
// 몫: 3
// 나머지: 1