// 과제9
// 세 수를 입력받아 가장 작은 수를 출력하는 순서도와 C 프로그램을 작성하여라.

#include <stdio.h>
int main(void)
{
    int a, b, c, min;
    printf("정수 3개를 입력하세요: ");
    scanf("%d %d %d", &a, &b, &c);

    min = a;
    min = (min > b)? b : min;
    min = (min > c)? c : min;

    printf("최솟값: %d\n", min);

    return 0;
}

// <실행 결과>
// 정수 3개를 입력하세요: 12 3 8
// 최솟값: 3