// 과제13
// 다음과 같은 요금 체계에 대해 거리에 따른 요금을 출력하는 순서도와 C 프로그램을 작성하여라.

#include <stdio.h>
int main(void)
{
    double distance;
    printf("거리를 입력하세요(단위 km): ");
    scanf("%lf", &distance);

    if (distance < 5)
        printf("요금 : 1,000원\n");
    else if (distance >= 5 && distance < 10)
        printf("요금 : 2,000원\n");
    else
        printf("요금 : 3,000원\n");

    return 0;
}

// <실행 결과>
// 거리를 입력하세요(단위 km): 8
// 요금 : 2,000원