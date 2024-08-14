// 과제12
// 3의 배수를 판별하는 다음 순서도의 ①을 채우고 C 프로그램을 작성하여라.

#include <stdio.h>
int main(void)
{
    int a;
    printf("정수를 입력하세요: ");
    scanf("%d", &a);

    if (a % 3 != 0)
        printf("3의 배수 아님\n");
    else
        printf("3의 배수\n");

    return 0;
}

// <실행 결과>
// 정수를 입력하세요: 8
// 3의 배수 아님