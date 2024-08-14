// 분 단위의 시간을 입력받아 일, 시간, 분으로 변환하여 출력하는 순서도와 C 프로그램을 작성하여라.
// 1일 = 1440분, 1시간 = 60분

#include <stdio.h>
int main(void)
{
    int num, day, hour, minute;
    printf("분을 입력하세요: ");
    scanf("%d", &num);

    day = num / 1440;
    hour = (num % 1440) / 60;
    minute = (num % 1440) % 60;

    printf("%d일 %d시간 %d분\n", day, hour, minute);
    
    return 0;
}

// <실행 결과>
// 분을 입력하세요: 8976
// 6일 5시간 36분