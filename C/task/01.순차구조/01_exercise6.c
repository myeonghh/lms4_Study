// 길이를 미터와 센티미터로 변환하기
#include <stdio.h>

int main(void)
{
    int cm;
    printf("cm를 입력하세요: ");
    scanf("%d", &cm);
    printf("%dm %dcm\n", cm / 100, cm % 100);

    return 0;
}

// <실행 결과>
// cm를 입력하세요: 1050
// 10m 50cm