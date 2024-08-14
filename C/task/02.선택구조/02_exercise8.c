// 예제 08
// 두 수 중 큰 수 찾기
// 사용자로부터 입력 받은 두 수를 변수 a, b에 저장하고, a 값이 b 값보다 크면 a 값을 출력하고, 그렇지 않으면 b 값을 출력한다.

#include <stdio.h>
int main(void)
{
    int a, b;
    printf("정수 2개를 입력하세요: ");
    scanf("%d %d", &a, &b);

    if (a > b)
        printf("큰 수: %d\n", a);
    else
        printf("큰 수: %d\n", b);

    return 0;
}

// <실행 결과>
// 정수 2개를 입력하세요: 3 8
// 큰 수: 8