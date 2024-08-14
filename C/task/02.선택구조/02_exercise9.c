// 예제 09
// 양수, 0, 음수 판별하기
// 사용자로부터 입력 받은 수를 변수 a에 저장하고, a가 0보다 작으면 “음수”를, 그렇지 않고 0보다 크면 “양수”를, 그렇지 않으면 “0”을 출력한다.

#include <stdio.h>
int main(void)
{
    int a;
    printf("정수를 입력하세요: ");
    scanf("%d", &a);

    if (a < 0)
        printf("음수다\n");
    else if (a > 0)
        printf("양수다\n");
    else
        printf("0이다");

    return 0;
}

// <실행 결과>
// 정수를 입력하세요: 10
// 양수다