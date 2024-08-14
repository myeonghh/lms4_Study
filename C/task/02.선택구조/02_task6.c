// 과제6
// 두 수를 입력받아 둘 중 작은 수를 출력하는 순서도와 C 프로그램을 작성하여라.

#include <stdio.h>
int main(void)
{
    int a, b;
    printf("정수 2개를 입력하세요: ");
    scanf("%d %d", &a, &b);
    printf("작은 수: %d\n", (a > b)? b : a);

    return 0;
}

// <실행 결과>
// 정수 2개를 입력하세요: 15 32
// 작은 수: 15