// 초 단위의 시간을 시간, 분, 초로 변환하기
#include <stdio.h>

int main(void)
{
    int num, hour, minute, second;

    printf("초를 입력하세요: ");
    scanf("%d", &num);
    
    hour = num / 3600;
    minute = (num % 3600) / 60;
    second = (num % 3600) % 60;

    printf("%d시간 %d분 %d초\n", hour, minute, second);

    return 0;
}

// <실행 결과>
// 초를 입력하세요: 4000
// 1시간 6분 40초