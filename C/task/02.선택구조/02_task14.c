// 과제14
// 하나의 수를 입력받아 5 또는 7의 배수인지 판별하는 순서도와 C 프로그램을 작성하여라.

#include <stdio.h>
int main(void)
{
    int num;
    printf("정수를 입력하세요: ");
    scanf("%d", &num);

    if (num % 5 == 0 || num % 7 == 0 )
        printf("5 또는 7의 배수입니다.\n");
    else
        printf("5 또는 7의 배수가 아닙니다.\n");

    return 0;
}

// <실행 결과>
// 정수를 입력하세요: 21
// 5 또는 7의 배수입니다.